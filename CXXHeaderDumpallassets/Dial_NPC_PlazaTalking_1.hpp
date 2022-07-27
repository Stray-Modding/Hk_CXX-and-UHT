#ifndef UE4SS_SDK_Dial_NPC_PlazaTalking_1_HPP
#define UE4SS_SDK_Dial_NPC_PlazaTalking_1_HPP

class ADial_NPC_PlazaTalking_1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* TalkingDroid_1;                                                // 0x0340 (size: 0x8)
    class ABP_Droid_C* TalkingDroid_2;                                                // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_NPC_PlazaTalking_1(int32 EntryPoint);
}; // Size: 0x350

#endif
