#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerTrackingMode.generated.h"

UENUM()
enum class EMagicLeapControllerTrackingMode : uint8 {
    InputService,
    CoordinateFrameUID,
};

