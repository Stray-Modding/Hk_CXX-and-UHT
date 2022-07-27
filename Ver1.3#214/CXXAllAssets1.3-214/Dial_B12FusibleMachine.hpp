#ifndef UE4SS_SDK_Dial_B12FusibleMachine_HPP
#define UE4SS_SDK_Dial_B12FusibleMachine_HPP

class ADial_B12FusibleMachine_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ALOOT_Fixed_Tracker_C* Tracker;                                             // 0x0340 (size: 0x8)
    bool DialIsFinished;                                                              // 0x0348 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_B12FusibleMachine(int32 EntryPoint);
}; // Size: 0x349

#endif
