#pragma once
#include "CoreMinimal.h"
#include "ETimeStretchCurveMapping.generated.h"

UENUM(BlueprintType)
enum class ETimeStretchCurveMapping : uint8 {
    T_Original,
    T_TargetMin,
    T_TargetMax,
    MAX,
};

