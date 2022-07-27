#ifndef UE4SS_SDK_DIAL_NPCBar1_HPP
#define UE4SS_SDK_DIAL_NPCBar1_HPP

class ADIAL_NPCBar1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_HatShop_Delivery_C* Sequ_Hatshop;                                      // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_NPCBar1(int32 EntryPoint);
}; // Size: 0x348

#endif
