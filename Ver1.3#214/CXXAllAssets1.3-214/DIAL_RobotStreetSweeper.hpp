#ifndef UE4SS_SDK_DIAL_RobotStreetSweeper_HPP
#define UE4SS_SDK_DIAL_RobotStreetSweeper_HPP

class ADIAL_RobotStreetSweeper_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_StreetSweeper_C* Seq_Sweeper;                                          // 0x0340 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0348 (size: 0x1)
    bool Looking at club;                                                             // 0x0349 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_RobotStreetSweeper(int32 EntryPoint);
}; // Size: 0x34A

#endif
