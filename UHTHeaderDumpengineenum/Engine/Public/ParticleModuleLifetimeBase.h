#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLifetimeBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleLifetimeBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLifetimeBase();
};

