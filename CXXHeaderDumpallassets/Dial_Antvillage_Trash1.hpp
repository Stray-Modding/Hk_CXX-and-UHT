#ifndef UE4SS_SDK_Dial_Antvillage_Trash1_HPP
#define UE4SS_SDK_Dial_Antvillage_Trash1_HPP

class ADial_Antvillage_Trash1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0340 (size: 0x1)
    class AActor* Look at arm;                                                        // 0x0348 (size: 0x8)
    class ABP_Droid_C* SpeakingDroid;                                                 // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Trash1(int32 EntryPoint);
}; // Size: 0x358

#endif
