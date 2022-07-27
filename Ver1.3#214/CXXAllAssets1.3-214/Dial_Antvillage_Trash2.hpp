#ifndef UE4SS_SDK_Dial_Antvillage_Trash2_HPP
#define UE4SS_SDK_Dial_Antvillage_Trash2_HPP

class ADial_Antvillage_Trash2_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Trash2(int32 EntryPoint);
}; // Size: 0x341

#endif
