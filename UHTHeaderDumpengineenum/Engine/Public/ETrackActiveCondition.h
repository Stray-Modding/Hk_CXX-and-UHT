#pragma once
#include "CoreMinimal.h"
#include "ETrackActiveCondition.generated.h"

UENUM(BlueprintType)
enum ETrackActiveCondition {
    ETAC_Always,
    ETAC_GoreEnabled,
    ETAC_GoreDisabled,
    ETAC_MAX UMETA(Hidden),
};

