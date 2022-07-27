#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleVectorFieldBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleVectorFieldBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleVectorFieldBase();
};

