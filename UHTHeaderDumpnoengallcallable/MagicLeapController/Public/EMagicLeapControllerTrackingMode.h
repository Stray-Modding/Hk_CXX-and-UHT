#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerTrackingMode.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapControllerTrackingMode : uint8 {
    InputService,
    CoordinateFrameUID,
};

