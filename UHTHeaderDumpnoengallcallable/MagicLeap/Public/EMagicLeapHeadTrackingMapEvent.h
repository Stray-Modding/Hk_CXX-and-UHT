#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingMapEvent.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
    Lost,
    Recovered,
    RecoveryFailed,
    NewSession,
};

