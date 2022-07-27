#ifndef UE4SS_SDK_Dial_B12Flat_Tuto_3_Inventory_HPP
#define UE4SS_SDK_Dial_B12Flat_Tuto_3_Inventory_HPP

class ADial_B12Flat_Tuto_3_Inventory_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_TutoZone_C* TutoInventory;                                              // 0x0340 (size: 0x8)
    class ASeq_MeetB12_C* SequB12Meet;                                                // 0x0348 (size: 0x8)
    bool Inventory tested;                                                            // 0x0350 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12Flat_Tuto_3_Inventory(int32 EntryPoint);
}; // Size: 0x351

#endif
