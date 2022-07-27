#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleParameterBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleParameterBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleParameterBase();
};

