#ifndef UE4SS_SDK_Dial_PNJ02_Street02_HPP
#define UE4SS_SDK_Dial_PNJ02_Street02_HPP

class ADial_PNJ02_Street02_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_MeowToOpenDoor_C* Seq_Door;                                            // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_PNJ02_Street02(int32 EntryPoint);
}; // Size: 0x348

#endif
