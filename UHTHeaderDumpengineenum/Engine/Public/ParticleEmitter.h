#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EEmitterRenderMode.h"
#include "EParticleSignificanceLevel.h"
#include "ParticleEmitter.generated.h"

class UParticleLODLevel;

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UParticleEmitter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EmitterName;
    
    UPROPERTY(Transient)
    int32 SubUVDataOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEmitterRenderMode> EmitterRenderMode;
    
    UPROPERTY(EditAnywhere)
    EParticleSignificanceLevel SignificanceLevel;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseLegacySpawningBehavior: 1;
    
    UPROPERTY()
    uint8 ConvertedModules: 1;
    
    UPROPERTY(Transient)
    uint8 bIsSoloing: 1;
    
    UPROPERTY()
    uint8 bCookedOut: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisabledLODsKeepEmitterAlive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableWhenInsignficant: 1;
    
    UPROPERTY(Export)
    TArray<UParticleLODLevel*> LODLevels;
    
    UPROPERTY()
    int32 PeakActiveParticles;
    
    UPROPERTY(EditAnywhere)
    int32 InitialAllocationCount;
    
    UPROPERTY(EditAnywhere)
    float QualityLevelSpawnRateScale;
    
    UPROPERTY(EditAnywhere)
    uint32 DetailModeBitmask;
    
    UParticleEmitter();
};

