#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColor.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleColor_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleColor_Seeded : public UParticleModuleColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleColor_Seeded();
};

