#pragma once
#include "CoreMinimal.h"
#include "EVoiceSampleRate.generated.h"

UENUM()
enum class EVoiceSampleRate : int32 {
    Low16000Hz = 0x3E80,
    Normal24000Hz = 0x5DC0,
};

