#pragma once
#include "CoreMinimal.h"
#include "EAutoPossessAI.generated.h"

UENUM(BlueprintType)
enum class EAutoPossessAI : uint8 {
    Disabled,
    PlacedInWorld,
    Spawned,
    PlacedInWorldOrSpawned,
};

