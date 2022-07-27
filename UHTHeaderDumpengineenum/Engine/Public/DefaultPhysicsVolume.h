#pragma once
#include "CoreMinimal.h"
#include "PhysicsVolume.h"
#include "DefaultPhysicsVolume.generated.h"

UCLASS(MinimalAPI, NotPlaceable, Transient)
class ADefaultPhysicsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    ADefaultPhysicsVolume();
};

