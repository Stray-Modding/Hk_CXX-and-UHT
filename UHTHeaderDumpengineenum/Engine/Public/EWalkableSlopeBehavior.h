#pragma once
#include "CoreMinimal.h"
#include "EWalkableSlopeBehavior.generated.h"

UENUM(BlueprintType)
enum EWalkableSlopeBehavior {
    WalkableSlope_Default,
    WalkableSlope_Increase,
    WalkableSlope_Decrease,
    WalkableSlope_Unwalkable,
    WalkableSlope_Max,
};

