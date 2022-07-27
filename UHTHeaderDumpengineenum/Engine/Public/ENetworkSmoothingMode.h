#pragma once
#include "CoreMinimal.h"
#include "ENetworkSmoothingMode.generated.h"

UENUM(BlueprintType)
enum class ENetworkSmoothingMode : uint8 {
    Disabled,
    Linear,
    Exponential,
    Replay,
};

