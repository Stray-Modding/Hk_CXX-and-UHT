#ifndef UE4SS_SDK_EyeTracker_HPP
#define UE4SS_SDK_EyeTracker_HPP

#include "EyeTracker_enums.hpp"

struct FEyeTrackerStereoGazeData
{
    FVector LeftEyeOrigin;                                                            // 0x0000 (size: 0xC)
    FVector LeftEyeDirection;                                                         // 0x000C (size: 0xC)
    FVector RightEyeOrigin;                                                           // 0x0018 (size: 0xC)
    FVector RightEyeDirection;                                                        // 0x0024 (size: 0xC)
    FVector FixationPoint;                                                            // 0x0030 (size: 0xC)
    float ConfidenceValue;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

struct FEyeTrackerGazeData
{
    FVector GazeOrigin;                                                               // 0x0000 (size: 0xC)
    FVector GazeDirection;                                                            // 0x000C (size: 0xC)
    FVector FixationPoint;                                                            // 0x0018 (size: 0xC)
    float ConfidenceValue;                                                            // 0x0024 (size: 0x4)

}; // Size: 0x28

class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetEyeTrackedPlayer(class APlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
}; // Size: 0x28

#endif
