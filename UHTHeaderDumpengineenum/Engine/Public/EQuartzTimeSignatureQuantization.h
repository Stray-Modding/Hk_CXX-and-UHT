#pragma once
#include "CoreMinimal.h"
#include "EQuartzTimeSignatureQuantization.generated.h"

UENUM(BlueprintType)
enum class EQuartzTimeSignatureQuantization : uint8 {
    HalfNote,
    QuarterNote,
    EighthNote,
    SixteenthNote,
    ThirtySecondNote,
    Count,
};

