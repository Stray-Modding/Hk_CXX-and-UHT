#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeUpdateResultFlags.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeUpdateResultFlags : uint8 {
    ApplyAsAbsolute = 0x1,
    SkipAutoScale,
    SkipAutoPlaySpace = 0x4,
    Default = 0x0,
    ECameraShakeUpdateResultFlags_MAX = 0x5,
};

