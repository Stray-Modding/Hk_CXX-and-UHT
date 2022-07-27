#ifndef UE4SS_SDK_BP_DialogBase_HPP
#define UE4SS_SDK_BP_DialogBase_HPP

class ABP_DialogBase_C : public ADialog
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    bool Randomize_Dialog_Variation;                                                  // 0x0330 (size: 0x1)
    int32 Dialog_Variation;                                                           // 0x0334 (size: 0x4)

    void OnItemShown(class ULootableComponent* _lootable);
    void OnDialogBegan();
    void OnMeetupBegan();
    void ReceiveBeginPlay();
    void Tech_Object();
    void Key_Object();
    void ExecuteUbergraph_BP_DialogBase(int32 EntryPoint);
}; // Size: 0x338

#endif
