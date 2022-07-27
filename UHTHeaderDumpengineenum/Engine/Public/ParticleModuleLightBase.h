#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLightBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleLightBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLightBase();
};

