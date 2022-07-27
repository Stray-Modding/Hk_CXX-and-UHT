#pragma once
#include "CoreMinimal.h"
#include "EOptimizationType.generated.h"

UENUM(BlueprintType)
enum EOptimizationType {
    OT_NumOfTriangles,
    OT_MaxDeviation,
    OT_MAX UMETA(Hidden),
};

