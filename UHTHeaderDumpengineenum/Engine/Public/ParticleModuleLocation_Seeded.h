#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLocation_Seeded.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocation_Seeded : public UParticleModuleLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLocation_Seeded();
};

