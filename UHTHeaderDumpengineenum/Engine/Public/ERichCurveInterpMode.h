#pragma once
#include "CoreMinimal.h"
#include "ERichCurveInterpMode.generated.h"

UENUM(BlueprintType)
enum ERichCurveInterpMode {
    RCIM_Linear,
    RCIM_Constant,
    RCIM_Cubic,
    RCIM_None,
    RCIM_MAX UMETA(Hidden),
};

