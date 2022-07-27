#pragma once
#include "CoreMinimal.h"
#include "EMaterialMergeType.generated.h"

UENUM(BlueprintType)
enum EMaterialMergeType {
    MaterialMergeType_Default,
    MaterialMergeType_Simplygon,
    MaterialMergeType_MAX UMETA(Hidden),
};

