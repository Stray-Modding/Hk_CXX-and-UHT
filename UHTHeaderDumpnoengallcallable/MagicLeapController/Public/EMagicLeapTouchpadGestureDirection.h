#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapTouchpadGestureDirection.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapTouchpadGestureDirection : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
    In,
    Out,
    Clockwise,
    CounterClockwise,
};

