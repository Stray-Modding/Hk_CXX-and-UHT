#ifndef UE4SS_SDK_Dial_SAS_Exit_PNJ02_HPP
#define UE4SS_SDK_Dial_SAS_Exit_PNJ02_HPP

class ADial_SAS_Exit_PNJ02_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ADial_SAS_Exit_PNJ01_C* Dial_SAS_Exit_PNJ01;                                // 0x0340 (size: 0x8)
    bool BrokenTrackerShown_To_NPC02;                                                 // 0x0348 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_SAS_Exit_PNJ02(int32 EntryPoint);
}; // Size: 0x349

#endif
