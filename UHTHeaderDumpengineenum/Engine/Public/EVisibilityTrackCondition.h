#pragma once
#include "CoreMinimal.h"
#include "EVisibilityTrackCondition.generated.h"

UENUM(BlueprintType)
enum EVisibilityTrackCondition {
    EVTC_Always,
    EVTC_GoreEnabled,
    EVTC_GoreDisabled,
    EVTC_MAX UMETA(Hidden),
};

