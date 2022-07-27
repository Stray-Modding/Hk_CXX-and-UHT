#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleCameraBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleCameraBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleCameraBase();
};

