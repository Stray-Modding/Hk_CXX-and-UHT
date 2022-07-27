#pragma once
#include "CoreMinimal.h"
#include "ENavDataGatheringModeConfig.generated.h"

UENUM(BlueprintType)
enum class ENavDataGatheringModeConfig : uint8 {
    Invalid,
    Instant,
    Lazy,
};

