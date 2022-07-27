#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleSpawnBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleSpawnBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bProcessSpawnRate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bProcessBurstList: 1;
    
    UParticleModuleSpawnBase();
};

