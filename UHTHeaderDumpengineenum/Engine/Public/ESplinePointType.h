#pragma once
#include "CoreMinimal.h"
#include "ESplinePointType.generated.h"

UENUM(BlueprintType)
namespace ESplinePointType {
    enum Type {
        Linear,
        Curve,
        Constant,
        CurveClamped,
        CurveCustomTangent,
    };
}

