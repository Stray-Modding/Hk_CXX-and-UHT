#pragma once
#include "CoreMinimal.h"
#include "EEvaluateCurveTableResult.generated.h"

UENUM(BlueprintType)
namespace EEvaluateCurveTableResult {
    enum Type {
        RowFound,
        RowNotFound,
    };
}

