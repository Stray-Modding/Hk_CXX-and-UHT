#pragma once
#include "CoreMinimal.h"
#include "FXSystemAsset.h"
#include "ParticleSystemLOD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ParticleSystemLODMethod.h"
#include "EParticleSystemOcclusionBoundsMethod.h"
#include "EParticleSystemUpdateMode.h"
#include "EParticleSystemInsignificanceReaction.h"
#include "EParticleSignificanceLevel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LODSoloTrack.h"
#include "NamedEmitterMaterial.h"
#include "ParticleSystem.generated.h"

class UParticleSystemComponent;
class UParticleEmitter;
class UInterpCurveEdSetup;

UCLASS(BlueprintType, MinimalAPI)
class UParticleSystem : public UFXSystemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float UpdateTime_FPS;
    
    UPROPERTY()
    float UpdateTime_Delta;
    
    UPROPERTY(EditAnywhere)
    float WarmupTime;
    
    UPROPERTY(EditAnywhere)
    float WarmupTickRate;
    
    UPROPERTY(Export)
    TArray<UParticleEmitter*> Emitters;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* PreviewComponent;
    
    UPROPERTY(Export)
    UInterpCurveEdSetup* CurveEdSetup;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float LODDistanceCheckTime;
    
    UPROPERTY(EditAnywhere)
    float MacroUVRadius;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> LODDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<FParticleSystemLOD> LODSettings;
    
    UPROPERTY(EditAnywhere)
    FBox FixedRelativeBoundingBox;
    
    UPROPERTY(EditAnywhere)
    float SecondsBeforeInactive;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float Delay;
    
    UPROPERTY(EditAnywhere)
    float DelayLow;
    
    UPROPERTY(EditAnywhere)
    uint8 bOrientZAxisTowardCamera: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseFixedRelativeBoundingBox: 1;
    
    UPROPERTY()
    uint8 bShouldResetPeakCounts: 1;
    
    UPROPERTY(Transient)
    uint8 bHasPhysics: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRealtimeThumbnail: 1;
    
    UPROPERTY()
    uint8 ThumbnailImageOutOfDate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDelayRange: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowManagedTicking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoDeactivate: 1;
    
    UPROPERTY()
    uint8 bRegenerateLODDuplicate: 1;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    
    UPROPERTY(EditAnywhere)
    EParticleSystemInsignificanceReaction InsignificantReaction;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod;
    
    UPROPERTY(EditAnywhere)
    EParticleSignificanceLevel MaxSignificanceLevel;
    
    UPROPERTY(EditAnywhere)
    uint32 MinTimeBetweenTicks;
    
    UPROPERTY(EditAnywhere)
    float InsignificanceDelay;
    
    UPROPERTY(EditAnywhere)
    FVector MacroUVPosition;
    
    UPROPERTY(EditAnywhere)
    FBox CustomOcclusionBounds;
    
    UPROPERTY(Transient)
    TArray<FLODSoloTrack> SoloTracking;
    
    UPROPERTY(EditAnywhere)
    TArray<FNamedEmitterMaterial> NamedMaterialSlots;
    
    UParticleSystem();
    UFUNCTION(BlueprintCallable)
    bool ContainsEmitterType(UClass* TypeData);
    
};

