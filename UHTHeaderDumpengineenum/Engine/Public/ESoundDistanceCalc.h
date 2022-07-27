#pragma once
#include "CoreMinimal.h"
#include "ESoundDistanceCalc.generated.h"

UENUM(BlueprintType)
enum ESoundDistanceCalc {
    SOUNDDISTANCE_Normal,
    SOUNDDISTANCE_InfiniteXYPlane,
    SOUNDDISTANCE_InfiniteXZPlane,
    SOUNDDISTANCE_InfiniteYZPlane,
    SOUNDDISTANCE_MAX UMETA(Hidden),
};

