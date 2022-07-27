#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
#include "MRMeshComponent.generated.h"

class UMaterialInterface;
class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MRMESH_API UMRMeshComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* WireframeMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bCreateMeshProxySections;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateNavMeshOnMeshUpdate;
    
    UPROPERTY(EditAnywhere)
    bool bNeverCreateCollisionMesh;
    
    UPROPERTY(Transient)
    UBodySetup* CachedBodySetup;
    
    UPROPERTY(Transient)
    TArray<UBodySetup*> BodySetups;
    
public:
    UMRMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetWireframeMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetWireframeColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetUseWireframe(bool bUseWireframe);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMeshOcclusion(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetWireframeColor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseWireframe() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableMeshOcclusion() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    
    // Fix for true pure virtual functions not being implemented
};

