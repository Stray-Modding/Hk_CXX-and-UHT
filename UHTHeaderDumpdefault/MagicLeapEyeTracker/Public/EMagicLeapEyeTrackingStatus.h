#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapEyeTrackingStatus.generated.h"

UENUM()
enum class EMagicLeapEyeTrackingStatus {
    NotConnected,
    Disabled,
    UserNotPresent,
    UserPresent,
    UserPresentAndWatchingWindow,
};

