#pragma once
#include "CoreMinimal.h"
#include "EStereoLayerType.generated.h"

UENUM(BlueprintType)
enum EStereoLayerType {
    SLT_WorldLocked,
    SLT_TrackerLocked,
    SLT_FaceLocked,
    SLT_MAX UMETA(Hidden),
};

