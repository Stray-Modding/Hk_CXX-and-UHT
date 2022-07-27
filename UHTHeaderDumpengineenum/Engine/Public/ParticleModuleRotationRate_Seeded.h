#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRate.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleRotationRate_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleRotationRate_Seeded();
};

