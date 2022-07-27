#pragma once
#include "CoreMinimal.h"
#include "LightmassPrimitiveSettings.h"
#include "MeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "StaticMeshComponentLODInfo.h"
#include "StreamingTextureBuildInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StaticMeshComponent.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UStaticMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 ForcedLodModel;
    
    UPROPERTY()
    int32 PreviousLODLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 MinLOD;
    
    UPROPERTY()
    int32 SubDivisionStepSize;
    
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_StaticMesh, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor WireframeColorOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bEvaluateWorldPositionOffset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideWireframeColor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideMinLod: 1;
    
    UPROPERTY(Transient)
    uint8 bOverrideNavigationExport: 1;
    
    UPROPERTY(Transient)
    uint8 bForceNavigationObstacle: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bDisallowMeshPaintPerInstance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreInstanceForTextureStreaming: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideLightMapRes: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastDistanceFieldIndirectShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideDistanceFieldSelfShadowBias: 1;
    
    UPROPERTY()
    uint8 bUseSubDivisions: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDefaultCollision: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReverseCulling: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverriddenLightMapRes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float DistanceFieldIndirectShadowMinVisibility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float DistanceFieldSelfShadowBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(Transient)
    TArray<FStaticMeshComponentLODInfo> LODData;
    
    UPROPERTY(NonTransactional)
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
    
    UPROPERTY(EditAnywhere)
    FLightmassPrimitiveSettings LightmassSettings;
    
    UStaticMeshComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool SetStaticMesh(UStaticMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseCulling(bool ReverseCulling);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLodModel(int32 NewForcedLodModel);
    
    UFUNCTION(BlueprintCallable)
    void SetEvaluateWorldPositionOffsetInRayTracing(bool newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceFieldSelfShadowBias(float newValue);
    
    UFUNCTION()
    void OnRep_StaticMesh(UStaticMesh* OldStaticMesh);
    
    UFUNCTION(BlueprintPure)
    void GetLocalBounds(FVector& Min, FVector& Max) const;
    
};

