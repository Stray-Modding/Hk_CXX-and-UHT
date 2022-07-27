#ifndef UE4SS_SDK_MagicLeapEyeTracker_HPP
#define UE4SS_SDK_MagicLeapEyeTracker_HPP

#include "MagicLeapEyeTracker_enums.hpp"

struct FMagicLeapEyeBlinkState
{
    bool LeftEyeBlinked;
    bool RightEyeBlinked;

};

class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};

#endif
