#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EParticleScreenAlignment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EParticleSortMode.h"
#include "RawDistributionFloat.h"
#include "ParticleBurst.h"
#include "EParticleSubUVInterpMethod.h"
#include "EParticleBurstMethod.h"
#include "EOpacitySourceMode.h"
#include "EParticleUVFlipMode.h"
#include "EEmitterNormalsMode.h"
#include "ESubUVBoundingVertexCount.h"
#include "ParticleModuleRequired.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRequired : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    float MinFacingCameraBlendDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxFacingCameraBlendDistance;
    
    UPROPERTY(EditAnywhere)
    FVector EmitterOrigin;
    
    UPROPERTY(EditAnywhere)
    FRotator EmitterRotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseLocalSpace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bKillOnDeactivate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bKillOnCompleted: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleSortMode> SortMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseLegacyEmitterTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRemoveHMDRoll: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEmitterDurationUseRange: 1;
    
    UPROPERTY(EditAnywhere)
    float EmitterDuration;
    
    UPROPERTY()
    FRawDistributionFloat SpawnRate;
    
    UPROPERTY(Export, NoClear)
    TArray<FParticleBurst> BurstList;
    
    UPROPERTY(EditAnywhere)
    float EmitterDelay;
    
    UPROPERTY(EditAnywhere)
    float EmitterDelayLow;
    
    UPROPERTY(EditAnywhere)
    uint8 bDelayFirstLoopOnly: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleUV: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEmitterDelayUseRange: 1;
    
    UPROPERTY()
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideSystemMacroUV: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaxDrawCount: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bOrbitModuleAffectsVelocityAlignment: 1;
    
    UPROPERTY(EditAnywhere)
    int32 SubImages_Horizontal;
    
    UPROPERTY(EditAnywhere)
    int32 SubImages_Vertical;
    
    UPROPERTY()
    float RandomImageTime;
    
    UPROPERTY(EditAnywhere)
    int32 RandomImageChanges;
    
    UPROPERTY(EditAnywhere)
    FVector MacroUVPosition;
    
    UPROPERTY(EditAnywhere)
    float MacroUVRadius;
    
    UPROPERTY(EditAnywhere)
    EParticleUVFlipMode UVFlippingMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bDurationRecalcEachLoop: 1;
    
    UPROPERTY(EditAnywhere)
    FVector NormalsSphereCenter;
    
    UPROPERTY(EditAnywhere)
    float AlphaThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 EmitterLoops;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* CutoutTexture;
    
    UPROPERTY(EditAnywhere)
    int32 MaxDrawCount;
    
    UPROPERTY(EditAnywhere)
    float EmitterDurationLow;
    
    UPROPERTY(EditAnywhere)
    FVector NormalsCylinderDirection;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NamedMaterialOverrides;
    
    UParticleModuleRequired();
};

