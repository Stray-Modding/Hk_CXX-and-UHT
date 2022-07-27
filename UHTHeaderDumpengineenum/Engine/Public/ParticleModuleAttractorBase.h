#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleAttractorBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleAttractorBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleAttractorBase();
};

