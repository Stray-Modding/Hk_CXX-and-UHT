#pragma once
#include "CoreMinimal.h"
#include "EMaterialStencilCompare.generated.h"

UENUM(BlueprintType)
enum EMaterialStencilCompare {
    MSC_Less,
    MSC_LessEqual,
    MSC_Greater,
    MSC_GreaterEqual,
    MSC_Equal,
    MSC_NotEqual,
    MSC_Never,
    MSC_Always,
    MSC_Count,
    MSC_MAX UMETA(Hidden),
};

