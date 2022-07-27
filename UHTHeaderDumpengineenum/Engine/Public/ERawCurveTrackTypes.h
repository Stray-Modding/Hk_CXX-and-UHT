#pragma once
#include "CoreMinimal.h"
#include "ERawCurveTrackTypes.generated.h"

UENUM(BlueprintType)
enum class ERawCurveTrackTypes : uint8 {
    RCT_Float,
    RCT_Vector,
    RCT_Transform,
    RCT_MAX UMETA(Hidden),
};

