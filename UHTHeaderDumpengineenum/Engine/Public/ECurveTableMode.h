#pragma once
#include "CoreMinimal.h"
#include "ECurveTableMode.generated.h"

UENUM(BlueprintType)
enum class ECurveTableMode : uint8 {
    Empty,
    SimpleCurves,
    RichCurves,
};

