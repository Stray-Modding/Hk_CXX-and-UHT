#pragma once
#include "CoreMinimal.h"
#include "EMaxConcurrentResolutionRule.generated.h"

UENUM(BlueprintType)
namespace EMaxConcurrentResolutionRule {
    enum Type {
        PreventNew,
        StopOldest,
        StopFarthestThenPreventNew,
        StopFarthestThenOldest,
        StopLowestPriority,
        StopQuietest,
        StopLowestPriorityThenPreventNew,
        Count,
    };
}

