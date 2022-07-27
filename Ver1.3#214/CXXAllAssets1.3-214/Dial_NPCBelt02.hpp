#ifndef UE4SS_SDK_Dial_NPCBelt02_HPP
#define UE4SS_SDK_Dial_NPCBelt02_HPP

class ADial_NPCBelt02_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* TalkingDroid;                                                  // 0x0340 (size: 0x8)
    class ABP_Droid_C* Child Droid;                                                   // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_NPCBelt02(int32 EntryPoint);
}; // Size: 0x350

#endif
