#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerLEDEffect.generated.h"

UENUM()
enum class EMagicLeapControllerLEDEffect : uint8 {
    RotateCW,
    RotateCCW,
    Pulse,
    PaintCW,
    PaintCCW,
    Blink,
};

