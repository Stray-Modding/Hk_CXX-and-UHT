#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSize.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleSize_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleSize_Seeded : public UParticleModuleSize {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleSize_Seeded();
};

