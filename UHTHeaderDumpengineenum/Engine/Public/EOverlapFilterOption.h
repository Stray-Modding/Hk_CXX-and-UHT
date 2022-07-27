#pragma once
#include "CoreMinimal.h"
#include "EOverlapFilterOption.generated.h"

UENUM(BlueprintType)
enum EOverlapFilterOption {
    OverlapFilter_All,
    OverlapFilter_DynamicOnly,
    OverlapFilter_StaticOnly,
    OverlapFilter_MAX UMETA(Hidden),
};

