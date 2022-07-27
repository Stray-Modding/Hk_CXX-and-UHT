#ifndef UE4SS_SDK_DIAL_JacketVendor_HPP
#define UE4SS_SDK_DIAL_JacketVendor_HPP

class ADIAL_JacketVendor_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ASeq_BoomerShop_C* Seq_BoomerShop;                                          // 0x0348 (size: 0x8)
    class ABP_Droid_C* Droid_ClothShop;                                               // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_JacketVendor(int32 EntryPoint);
}; // Size: 0x358

#endif
