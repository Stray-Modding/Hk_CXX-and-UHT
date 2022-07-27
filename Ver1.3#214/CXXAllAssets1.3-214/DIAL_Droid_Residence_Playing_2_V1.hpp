#ifndef UE4SS_SDK_DIAL_Droid_Residence_Playing_2_V1_HPP
#define UE4SS_SDK_DIAL_Droid_Residence_Playing_2_V1_HPP

class ADIAL_Droid_Residence_Playing_2_V1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* OtherDroid;                                                         // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_Droid_Residence_Playing_2_V1(int32 EntryPoint);
}; // Size: 0x348

#endif
