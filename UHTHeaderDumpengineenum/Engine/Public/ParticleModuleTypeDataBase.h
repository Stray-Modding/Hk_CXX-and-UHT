#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleTypeDataBase.generated.h"

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleTypeDataBase();
};

