#ifndef UE4SS_SDK_Dial_B12Tracker_HPP
#define UE4SS_SDK_Dial_B12Tracker_HPP

class ADial_B12Tracker_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool DialIsFinished;                                                              // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_B12Tracker(int32 EntryPoint);
}; // Size: 0x341

#endif
