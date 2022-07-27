#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KConvexElem -FallbackName=KConvexElem
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "ProcMeshSection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ProcMeshTangent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ProceduralMeshComponent.generated.h"

class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROCEDURALMESHCOMPONENT_API UProceduralMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseComplexAsSimpleCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAsyncCooking;
    
    UPROPERTY(Instanced)
    UBodySetup* ProcMeshBodySetup;
    
private:
    UPROPERTY()
    TArray<FProcMeshSection> ProcMeshSections;
    
    UPROPERTY()
    TArray<FKConvexElem> CollisionConvexElems;
    
    UPROPERTY()
    FBoxSphereBounds LocalBounds;
    
    UPROPERTY(Transient)
    TArray<UBodySetup*> AsyncBodySetupQueue;
    
public:
    UProceduralMeshComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearCollisionConvexMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
    
    
    // Fix for true pure virtual functions not being implemented
};

