#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleAccelerationBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleAccelerationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bAlwaysInWorldSpace: 1;
    
    UParticleModuleAccelerationBase();
};

