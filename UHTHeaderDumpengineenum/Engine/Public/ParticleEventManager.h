#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ParticleEventManager.generated.h"

UCLASS(NotPlaceable, Config=Game)
class AParticleEventManager : public AActor {
    GENERATED_BODY()
public:
    AParticleEventManager();
};

