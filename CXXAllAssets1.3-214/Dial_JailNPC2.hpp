#ifndef UE4SS_SDK_Dial_JailNPC2_HPP
#define UE4SS_SDK_Dial_JailNPC2_HPP

class ADial_JailNPC2_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool talked_once;                                                                 // 0x0340 (size: 0x1)
    bool SentinelTrapped_Part1;                                                       // 0x0341 (size: 0x1)
    bool SentinelTrapped_Part2;                                                       // 0x0342 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_JailNPC2(int32 EntryPoint);
}; // Size: 0x343

#endif
