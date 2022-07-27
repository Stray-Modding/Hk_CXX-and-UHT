#pragma once
#include "CoreMinimal.h"
#include "EMouseCaptureMode.generated.h"

UENUM(BlueprintType)
enum class EMouseCaptureMode : uint8 {
    NoCapture,
    CapturePermanently,
    CapturePermanently_IncludingInitialMouseDown,
    CaptureDuringMouseDown,
    CaptureDuringRightMouseDown,
};

