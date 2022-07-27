#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingGestureFilterLevel.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8 {
    NoFilter,
    SlightRobustnessToFlicker,
    MoreRobustnessToFlicker,
};

