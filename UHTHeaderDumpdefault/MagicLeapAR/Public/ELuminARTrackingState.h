#pragma once
#include "CoreMinimal.h"
#include "ELuminARTrackingState.generated.h"

UENUM()
enum class ELuminARTrackingState : uint8 {
    Tracking,
    NotTracking,
    StoppedTracking,
};

