#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleOrbitBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleOrbitBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseEmitterTime: 1;
    
    UParticleModuleOrbitBase();
};

