#pragma once
#include "CoreMinimal.h"
#include "ETimelineLengthMode.generated.h"

UENUM(BlueprintType)
enum ETimelineLengthMode {
    TL_TimelineLength,
    TL_LastKeyFrame,
    TL_MAX UMETA(Hidden),
};

