#pragma once
#include "CoreMinimal.h"
#include "EProbeLimitType.generated.h"

UENUM()
enum EProbeLimitType {
    ProbeLimitType_Open,
    ProbeLimitType_Wall,
    ProbeLimitType_Gap,
    ProbeLimitType_MAX UMETA(Hidden),
};

