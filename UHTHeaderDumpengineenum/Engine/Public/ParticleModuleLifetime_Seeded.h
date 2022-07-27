#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLifetime.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLifetime_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLifetime_Seeded();
};

