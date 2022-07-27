#pragma once
#include "CoreMinimal.h"
#include "ERichCurveExtrapolation.generated.h"

UENUM(BlueprintType)
enum ERichCurveExtrapolation {
    RCCE_Cycle,
    RCCE_CycleWithOffset,
    RCCE_Oscillate,
    RCCE_Linear,
    RCCE_Constant,
    RCCE_None,
    RCCE_MAX UMETA(Hidden),
};

