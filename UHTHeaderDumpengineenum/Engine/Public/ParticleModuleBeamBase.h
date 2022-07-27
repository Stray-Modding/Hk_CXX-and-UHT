#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleBeamBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleBeamBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleBeamBase();
};

