#pragma once
#include "CoreMinimal.h"
#include "EAnimCurveType.generated.h"

UENUM(BlueprintType)
enum class EAnimCurveType : uint8 {
    AttributeCurve,
    MaterialCurve,
    MorphTargetCurve,
    MaxAnimCurveType,
};

