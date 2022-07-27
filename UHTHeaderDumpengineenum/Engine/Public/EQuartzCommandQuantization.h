#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.generated.h"

UENUM(BlueprintType)
enum class EQuartzCommandQuantization : uint8 {
    Bar,
    Beat,
    ThirtySecondNote,
    SixteenthNote,
    EighthNote,
    QuarterNote,
    HalfNote,
    WholeNote,
    DottedSixteenthNote,
    DottedEighthNote,
    DottedQuarterNote,
    DottedHalfNote,
    DottedWholeNote,
    SixteenthNoteTriplet,
    EighthNoteTriplet,
    QuarterNoteTriplet,
    HalfNoteTriplet,
    Tick,
    Count,
    None,
};

