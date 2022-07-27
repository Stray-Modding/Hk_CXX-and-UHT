#ifndef UE4SS_SDK_COMP_UsableItem_HPP
#define UE4SS_SDK_COMP_UsableItem_HPP

class UCOMP_UsableItem_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class ULootableComponent* Item;                                                   // 0x05A8 (size: 0x8)
    FCOMP_UsableItem_CItemUsed ItemUsed;                                              // 0x05B0 (size: 0x10)
    void ItemUsed(class ULootableComponent* Item);
    class USoundBase* sfx_success_use;                                                // 0x05C0 (size: 0x8)
    class USoundBase* sfx_fail_use;                                                   // 0x05C8 (size: 0x8)

    void SucceedItemUse();
    void FailItemUse();
    void ReceiveBeginPlay();
    void _OnDroneUseStarted(class ADrone* _drone);
    void _OnDroneUseEnded(class ADrone* _drone);
    void UseItem(class ULootableComponent* Item);
    void ExecuteUbergraph_COMP_UsableItem(int32 EntryPoint);
    void ItemUsed__DelegateSignature(class ULootableComponent* Item);
}; // Size: 0x5D0

#endif
