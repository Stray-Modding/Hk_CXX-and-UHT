#pragma once
#include "CoreMinimal.h"
#include "EVisibilityAggressiveness.generated.h"

UENUM(BlueprintType)
enum EVisibilityAggressiveness {
    VIS_LeastAggressive,
    VIS_ModeratelyAggressive,
    VIS_MostAggressive,
    VIS_Max,
};

