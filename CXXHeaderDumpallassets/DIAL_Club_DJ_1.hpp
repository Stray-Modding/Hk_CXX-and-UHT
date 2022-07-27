#ifndef UE4SS_SDK_DIAL_Club_DJ_1_HPP
#define UE4SS_SDK_DIAL_Club_DJ_1_HPP

class ADIAL_Club_DJ_1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid_DJ;                                                      // 0x0340 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0348 (size: 0x1)
    class AActor* Show_Blazer;                                                        // 0x0350 (size: 0x8)
    class ASeq_Camera_Balcony_Blazer_C* Seq_Cam_Blazer;                               // 0x0358 (size: 0x8)

    void LogicTrigger();
    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_Club_DJ_1(int32 EntryPoint);
}; // Size: 0x360

#endif
