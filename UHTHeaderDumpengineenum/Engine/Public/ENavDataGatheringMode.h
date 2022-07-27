#pragma once
#include "CoreMinimal.h"
#include "ENavDataGatheringMode.generated.h"

UENUM(BlueprintType)
enum class ENavDataGatheringMode : uint8 {
    Default,
    Instant,
    Lazy,
};

