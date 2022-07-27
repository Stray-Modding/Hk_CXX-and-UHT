#pragma once
#include "CoreMinimal.h"
#include "ELuminFrameTimingHint.generated.h"

UENUM()
enum class ELuminFrameTimingHint : uint8 {
    Unspecified,
    Maximum,
    FPS_60,
    FPS_120,
};

