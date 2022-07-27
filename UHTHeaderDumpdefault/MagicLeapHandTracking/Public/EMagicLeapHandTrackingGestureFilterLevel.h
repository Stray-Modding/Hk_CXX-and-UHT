#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingGestureFilterLevel.generated.h"

UENUM()
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8 {
    NoFilter,
    SlightRobustnessToFlicker,
    MoreRobustnessToFlicker,
};

