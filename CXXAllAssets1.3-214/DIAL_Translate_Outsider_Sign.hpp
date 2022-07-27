#ifndef UE4SS_SDK_DIAL_Translate_Outsider_Sign_HPP
#define UE4SS_SDK_DIAL_Translate_Outsider_Sign_HPP

class ADIAL_Translate_Outsider_Sign_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_Translate_Outsider_Sign(int32 EntryPoint);
}; // Size: 0x340

#endif
