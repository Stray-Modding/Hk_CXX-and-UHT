#ifndef UE4SS_SDK_Dial_NPC_PlazaTalking_2_HPP
#define UE4SS_SDK_Dial_NPC_PlazaTalking_2_HPP

class ADial_NPC_PlazaTalking_2_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* OtherDroid;                                                    // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_NPC_PlazaTalking_2(int32 EntryPoint);
}; // Size: 0x348

#endif
