#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleMaterialBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleMaterialBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleMaterialBase();
};

