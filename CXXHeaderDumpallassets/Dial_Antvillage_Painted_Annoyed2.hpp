#ifndef UE4SS_SDK_Dial_Antvillage_Painted_Annoyed2_HPP
#define UE4SS_SDK_Dial_Antvillage_Painted_Annoyed2_HPP

class ADial_Antvillage_Painted_Annoyed2_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UMaterialInstance* Droid Screen;                                            // 0x0340 (size: 0x8)
    class ABP_Droid_C* SpeakingDroid;                                                 // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Painted_Annoyed2(int32 EntryPoint);
}; // Size: 0x350

#endif
