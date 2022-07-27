#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleRotation_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleRotation_Seeded();
};

