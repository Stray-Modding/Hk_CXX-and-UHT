#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StaticMeshComponent.h"
#include "Interface_CollisionDataProvider.h"
#include "ESplineMeshAxis.h"
#include "SplineMeshParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SplineMeshComponent.generated.h"

class UBodySetup;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USplineMeshComponent : public UStaticMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSplineMeshParams SplineParams;
    
    UPROPERTY(EditAnywhere)
    FVector SplineUpDir;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SplineBoundaryMin;
    
    UPROPERTY()
    FGuid CachedMeshBodySetupGuid;
    
    UPROPERTY()
    UBodySetup* BodySetup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SplineBoundaryMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAllowSplineEditingPerInstance: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSmoothInterpRollScale: 1;
    
    UPROPERTY(Transient)
    uint8 bMeshDirty: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    
    UPROPERTY()
    float VirtualTextureMainPassMaxDrawDistance;
    
    USplineMeshComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPosition(FVector StartPos, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetForwardAxis(TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndTangent(FVector EndTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndScale(FVector2D EndScale, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPosition(FVector EndPos, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    
    UFUNCTION(BlueprintPure)
    FVector GetStartTangent() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetStartScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartRoll() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetStartPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetStartOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSplineUpDir() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ESplineMeshAxis::Type> GetForwardAxis() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEndTangent() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetEndScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetEndRoll() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEndPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetEndOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoundaryMin() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoundaryMax() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

