#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocity.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleVelocity_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleVelocity_Seeded();
};

