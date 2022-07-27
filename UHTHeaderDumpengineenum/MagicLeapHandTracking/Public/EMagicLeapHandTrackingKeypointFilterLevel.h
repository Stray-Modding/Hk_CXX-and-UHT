#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingKeypointFilterLevel.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8 {
    NoFilter,
    SimpleSmoothing,
    PredictiveSmoothing,
};

