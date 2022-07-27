#ifndef UE4SS_SDK_Dial_Ending_DisplayRobot_HPP
#define UE4SS_SDK_Dial_Ending_DisplayRobot_HPP

class ADial_Ending_DisplayRobot_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x0340 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0348 (size: 0x8)
    class AActor* Drone_Target;                                                       // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Ending_DisplayRobot(int32 EntryPoint);
}; // Size: 0x358

#endif
