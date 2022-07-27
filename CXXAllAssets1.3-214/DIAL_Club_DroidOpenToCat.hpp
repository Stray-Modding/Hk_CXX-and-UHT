#ifndef UE4SS_SDK_DIAL_Club_DroidOpenToCat_HPP
#define UE4SS_SDK_DIAL_Club_DroidOpenToCat_HPP

class ADIAL_Club_DroidOpenToCat_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0340 (size: 0x8)
    class ASeq_Intro_Club_C* Seq_Intro_Club;                                          // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_Club_DroidOpenToCat(int32 EntryPoint);
}; // Size: 0x350

#endif
