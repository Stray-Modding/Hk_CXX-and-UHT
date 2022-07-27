#ifndef UE4SS_SDK_DIAL_NPCBar4_HPP
#define UE4SS_SDK_DIAL_NPCBar4_HPP

class ADIAL_NPCBar4_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_NPCBar4(int32 EntryPoint);
}; // Size: 0x340

#endif
