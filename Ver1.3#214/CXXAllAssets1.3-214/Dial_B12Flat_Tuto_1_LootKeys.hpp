#ifndef UE4SS_SDK_Dial_B12Flat_Tuto_1_LootKeys_HPP
#define UE4SS_SDK_Dial_B12Flat_Tuto_1_LootKeys_HPP

class ADial_B12Flat_Tuto_1_LootKeys_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_MeetB12_C* SeqB12Meet;                                                 // 0x0340 (size: 0x8)
    class AActor* Lootable_key;                                                       // 0x0348 (size: 0x8)
    bool Looted;                                                                      // 0x0350 (size: 0x1)
    class AActor* Pos_Loot;                                                           // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void ReceiveBeginPlay();
    void PostCardLooted(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_B12Flat_Tuto_1_LootKeys(int32 EntryPoint);
}; // Size: 0x360

#endif
