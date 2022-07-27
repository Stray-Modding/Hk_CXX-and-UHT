#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleKillBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleKillBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleKillBase();
};

