#ifndef UE4SS_SDK_Dial_B12_PutTheTransceiver_HPP
#define UE4SS_SDK_Dial_B12_PutTheTransceiver_HPP

class ADial_B12_PutTheTransceiver_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Dial_end;                                                                    // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_B12_PutTheTransceiver(int32 EntryPoint);
}; // Size: 0x341

#endif
