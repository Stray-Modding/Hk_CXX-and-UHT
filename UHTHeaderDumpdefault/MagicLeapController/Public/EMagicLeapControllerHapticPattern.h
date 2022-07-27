#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerHapticPattern.generated.h"

UENUM()
enum class EMagicLeapControllerHapticPattern : uint8 {
    None,
    Click,
    Bump,
    DoubleClick,
    Buzz,
    Tick,
    ForceDown,
    ForceUp,
    ForceDwell,
    SecondForceDown,
};

