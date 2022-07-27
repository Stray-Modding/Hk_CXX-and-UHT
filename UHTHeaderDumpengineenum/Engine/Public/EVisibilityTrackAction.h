#pragma once
#include "CoreMinimal.h"
#include "EVisibilityTrackAction.generated.h"

UENUM(BlueprintType)
enum EVisibilityTrackAction {
    EVTA_Hide,
    EVTA_Show,
    EVTA_Toggle,
    EVTA_MAX UMETA(Hidden),
};

