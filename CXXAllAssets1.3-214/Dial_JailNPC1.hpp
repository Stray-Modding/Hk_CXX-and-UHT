#ifndef UE4SS_SDK_Dial_JailNPC1_HPP
#define UE4SS_SDK_Dial_JailNPC1_HPP

class ADial_JailNPC1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Sentinel_Trapped;                                                            // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_JailNPC1(int32 EntryPoint);
}; // Size: 0x341

#endif
