#ifndef UE4SS_SDK_Dial_B12Flat_Tuto_2_PutBackpack_HPP
#define UE4SS_SDK_Dial_B12Flat_Tuto_2_PutBackpack_HPP

class ADial_B12Flat_Tuto_2_PutBackpack_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ALOOT_Keys_B12Flat_C* Keys;                                                 // 0x0348 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0350 (size: 0x8)
    class AActor* Drone_pos_Backpack;                                                 // 0x0358 (size: 0x8)
    class AFAKELOOT_Backpack_C* FakeBackPack;                                         // 0x0360 (size: 0x8)
    class AActor* Drone_pos_Cat;                                                      // 0x0368 (size: 0x8)
    class ASeq_CatFlopWithBackpack_C* Seq_Flop;                                       // 0x0370 (size: 0x8)
    bool BackPackOn;                                                                  // 0x0378 (size: 0x1)
    class UMaterialInstanceDynamic* Loot_Dynamic_Mat;                                 // 0x0380 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__Dial_B12Flat_Tuto_2_Inventory_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_B12Flat_Tuto_2_PutBackpack(int32 EntryPoint);
}; // Size: 0x388

#endif
