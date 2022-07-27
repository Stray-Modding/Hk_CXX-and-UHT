#ifndef UE4SS_SDK_Dial_Ending_WindowCleanerRobot_HPP
#define UE4SS_SDK_Dial_Ending_WindowCleanerRobot_HPP

class ADial_Ending_WindowCleanerRobot_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* Scissors;                                                           // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Ending_WindowCleanerRobot(int32 EntryPoint);
}; // Size: 0x358

#endif
