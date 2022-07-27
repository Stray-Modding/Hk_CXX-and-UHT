#pragma once
#include "CoreMinimal.h"
#include "EToyoSegmentLengthCalculationMode.generated.h"

UENUM()
enum class EToyoSegmentLengthCalculationMode : uint8 {
    SplineDistance,
    PointsDistance,
};

