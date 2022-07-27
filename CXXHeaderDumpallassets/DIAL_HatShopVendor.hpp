#ifndef UE4SS_SDK_DIAL_HatShopVendor_HPP
#define UE4SS_SDK_DIAL_HatShopVendor_HPP

class ADIAL_HatShopVendor_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_HatShop_Delivery_C* Seq_HatShop;                                       // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_HatShopVendor(int32 EntryPoint);
}; // Size: 0x348

#endif
