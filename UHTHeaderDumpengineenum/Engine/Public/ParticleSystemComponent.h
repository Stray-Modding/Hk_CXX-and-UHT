#pragma once
#include "CoreMinimal.h"
#include "EParticleSignificanceLevel.h"
#include "FXSystemComponent.h"
#include "ParticleSysParam.h"
#include "ParticleSystemLODMethod.h"
#include "ParticleSpawnSignatureDelegate.h"
#include "ParticleBurstSignatureDelegate.h"
#include "ParticleDeathSignatureDelegate.h"
#include "ParticleCollisionSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAttachmentRule.h"
#include "OnSystemFinishedDelegate.h"
#include "ETrailWidthMode.h"
#include "EAttachLocation.h"
#include "ParticleSystemComponent.generated.h"

class USkeletalMeshComponent;
class UParticleSystem;
class UMaterialInterface;
class UParticleSystemReplay;
class USceneComponent;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UParticleSystemComponent : public UFXSystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* Template;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UMaterialInterface*> EmitterMaterials;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<USkeletalMeshComponent*> SkelMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bResetOnDetach: 1;
    
    UPROPERTY()
    uint8 bUpdateOnDedicatedServer: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bAllowRecycling: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoManageAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAutoAttachWeldSimulatedBodies: 1;
    
    UPROPERTY()
    uint8 bWarmingUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideLODMethod: 1;
    
    UPROPERTY()
    uint8 bSkipUpdateDynamicDataDuringTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    
    UPROPERTY()
    EParticleSignificanceLevel RequiredSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FParticleSysParam> InstanceParameters;
    
    UPROPERTY(BlueprintAssignable)
    FParticleSpawnSignature OnParticleSpawn;
    
    UPROPERTY(BlueprintAssignable)
    FParticleBurstSignature OnParticleBurst;
    
    UPROPERTY(BlueprintAssignable)
    FParticleDeathSignature OnParticleDeath;
    
    UPROPERTY(BlueprintAssignable)
    FParticleCollisionSignature OnParticleCollide;
    
    UPROPERTY()
    bool bOldPositionValid;
    
    UPROPERTY()
    FVector OldPosition;
    
    UPROPERTY()
    FVector PartSysVelocity;
    
    UPROPERTY()
    float WarmupTime;
    
    UPROPERTY()
    float WarmupTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsBeforeInactive;
    
    UPROPERTY()
    float MaxTimeBeforeForceUpdateTransform;
    
    UPROPERTY()
    TArray<UParticleSystemReplay*> ReplayClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleInstanceOnly)
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AutoAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachScaleRule;
    
    UPROPERTY(BlueprintAssignable)
    FOnSystemFinished OnSystemFinished;
    
    UParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplate(UParticleSystem* NewTemplate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamTargetTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamTargetPoint(int32 EmitterIndex, FVector NewTargetPoint, int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamSourceTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 SourceIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamSourcePoint(int32 EmitterIndex, FVector NewSourcePoint, int32 SourceIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamEndPoint(int32 EmitterIndex, FVector NewEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoAttachParams(USceneComponent* Parent, FName SocketName, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActiveParticles() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetNamedMaterial(FName InName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, FVector& OutTangentPoint) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, float& OutTargetStrength) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, FVector& OutTargetPoint) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, FVector& OutTangentPoint) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, float& OutSourceStrength) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, FVector& OutSourcePoint) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBeamEndPoint(int32 EmitterIndex, FVector& OutEndPoint) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void EndTrails();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
    
};

