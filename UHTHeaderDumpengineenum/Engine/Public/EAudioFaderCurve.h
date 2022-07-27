#pragma once
#include "CoreMinimal.h"
#include "EAudioFaderCurve.generated.h"

UENUM(BlueprintType)
enum class EAudioFaderCurve : uint8 {
    Linear,
    Logarithmic,
    SCurve,
    Sin,
    Count,
};

