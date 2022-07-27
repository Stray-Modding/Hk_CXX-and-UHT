#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorCollisionHandlingMethod.generated.h"

UENUM(BlueprintType)
enum class ESpawnActorCollisionHandlingMethod : uint8 {
    Undefined,
    AlwaysSpawn,
    AdjustIfPossibleButAlwaysSpawn,
    AdjustIfPossibleButDontSpawnIfColliding,
    DontSpawnIfColliding,
};

