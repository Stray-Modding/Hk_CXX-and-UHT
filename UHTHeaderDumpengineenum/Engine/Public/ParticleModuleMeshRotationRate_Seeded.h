#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRate.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleMeshRotationRate_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleMeshRotationRate_Seeded();
};

