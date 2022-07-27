#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingKeypointFilterLevel.generated.h"

UENUM()
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8 {
    NoFilter,
    SimpleSmoothing,
    PredictiveSmoothing,
};

