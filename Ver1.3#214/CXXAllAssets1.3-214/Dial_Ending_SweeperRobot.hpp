#ifndef UE4SS_SDK_Dial_Ending_SweeperRobot_HPP
#define UE4SS_SDK_Dial_Ending_SweeperRobot_HPP

class ADial_Ending_SweeperRobot_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Ending_SweeperRobot(int32 EntryPoint);
}; // Size: 0x340

#endif
