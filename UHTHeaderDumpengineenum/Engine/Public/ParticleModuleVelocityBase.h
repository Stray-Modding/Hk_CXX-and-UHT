#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleVelocityBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleVelocityBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bInWorldSpace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyOwnerScale: 1;
    
    UParticleModuleVelocityBase();
};

