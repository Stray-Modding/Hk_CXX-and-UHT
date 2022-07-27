#ifndef UE4SS_SDK_Dial_Translate_BarEmployee_HPP
#define UE4SS_SDK_Dial_Translate_BarEmployee_HPP

class ADial_Translate_BarEmployee_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Translate_BarEmployee(int32 EntryPoint);
}; // Size: 0x340

#endif
