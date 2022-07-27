#pragma once
#include "CoreMinimal.h"
#include "ERootMotionSourceSettingsFlags.generated.h"

UENUM(BlueprintType)
enum class ERootMotionSourceSettingsFlags : uint8 {
    UseSensitiveLiftoffCheck = 0x1,
    DisablePartialEndTick,
    IgnoreZAccumulate = 0x4,
};

