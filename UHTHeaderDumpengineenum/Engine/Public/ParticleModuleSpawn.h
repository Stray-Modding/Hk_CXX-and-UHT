#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSpawnBase.h"
#include "RawDistributionFloat.h"
#include "EParticleBurstMethod.h"
#include "ParticleBurst.h"
#include "ParticleModuleSpawn.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSpawn : public UParticleModuleSpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Rate;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat RateScale;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    TArray<FParticleBurst> BurstList;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat BurstScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyGlobalSpawnRateScale: 1;
    
    UParticleModuleSpawn();
};

