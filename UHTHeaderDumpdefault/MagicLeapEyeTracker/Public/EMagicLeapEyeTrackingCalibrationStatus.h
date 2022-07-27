#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapEyeTrackingCalibrationStatus.generated.h"

UENUM()
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8 {
    None,
    Bad,
    Good,
};

