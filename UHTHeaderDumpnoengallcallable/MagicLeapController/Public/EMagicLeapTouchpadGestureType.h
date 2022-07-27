#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapTouchpadGestureType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapTouchpadGestureType : uint8 {
    None,
    Tap,
    ForceTapDown,
    ForceTapUp,
    ForceDwell,
    SecondForceDown,
    LongHold,
    RadialScroll,
    Swipe,
    Scroll,
    Pinch,
};

