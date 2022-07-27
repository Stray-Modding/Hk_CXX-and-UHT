#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleEventReceiverBase.h"
#include "ParticleModuleEventReceiverKillParticles.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bStopSpawning: 1;
    
    UParticleModuleEventReceiverKillParticles();
};

