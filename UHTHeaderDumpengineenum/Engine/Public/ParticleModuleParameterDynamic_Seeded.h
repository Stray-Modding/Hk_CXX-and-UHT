#pragma once
#include "CoreMinimal.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleParameterDynamic.h"
#include "ParticleModuleParameterDynamic_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleParameterDynamic_Seeded();
};

