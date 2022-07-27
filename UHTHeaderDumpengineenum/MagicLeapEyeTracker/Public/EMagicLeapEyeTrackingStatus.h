#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapEyeTrackingStatus.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapEyeTrackingStatus : uint8 {
    NotConnected,
    Disabled,
    UserNotPresent,
    UserPresent,
    UserPresentAndWatchingWindow,
};

