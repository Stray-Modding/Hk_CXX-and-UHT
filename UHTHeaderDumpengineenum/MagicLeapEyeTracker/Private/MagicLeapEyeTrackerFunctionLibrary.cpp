#include "MagicLeapEyeTrackerFunctionLibrary.h"

bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState) {
    return false;
}

EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus() {
    return EMagicLeapEyeTrackingCalibrationStatus::None;
}

UMagicLeapEyeTrackerFunctionLibrary::UMagicLeapEyeTrackerFunctionLibrary() {
}

