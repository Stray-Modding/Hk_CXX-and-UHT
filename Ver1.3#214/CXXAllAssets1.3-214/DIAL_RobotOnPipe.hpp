#ifndef UE4SS_SDK_DIAL_RobotOnPipe_HPP
#define UE4SS_SDK_DIAL_RobotOnPipe_HPP

class ADIAL_RobotOnPipe_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0340 (size: 0x8)
    class AActor* DroneUp;                                                            // 0x0348 (size: 0x8)
    class AActor* DroneDown;                                                          // 0x0350 (size: 0x8)
    bool talked_from_below;                                                           // 0x0358 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_RobotOnPipe(int32 EntryPoint);
}; // Size: 0x359

#endif
