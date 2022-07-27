#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleEventBase.h"
#include "ParticleEvent_GenerateInfo.h"
#include "ParticleModuleEventGenerator.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleEventGenerator : public UParticleModuleEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    TArray<FParticleEvent_GenerateInfo> Events;
    
    UParticleModuleEventGenerator();
};

