#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingMode.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHeadTrackingMode : uint8 {
    PositionAndOrientation,
    Unavailable,
    Unknown,
};

