#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "ParticleModuleLocationEmitterDirect.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    FName EmitterName;
    
    UParticleModuleLocationEmitterDirect();
};

