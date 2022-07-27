#ifndef UE4SS_SDK_Dial_B12Mem_Feel_HPP
#define UE4SS_SDK_Dial_B12Mem_Feel_HPP

class ADial_B12Mem_Feel_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* Look_At_spot;                                                       // 0x0348 (size: 0x8)
    class AActor* Look_Away;                                                          // 0x0350 (size: 0x8)
    class ABP_B12_SecondaryMemory_Scene_C* Memory;                                    // 0x0358 (size: 0x8)
    class ABP_CatButton_SleepSpot_WithCamera_C* SleepSpot;                            // 0x0360 (size: 0x8)
    class ATriggerBox* Blockinteraction;                                              // 0x0368 (size: 0x8)

    void OnDialogBegan();
    void OnRequestDialog();
    void BndEvt__Dial_B12Mem_Feel_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_B12Mem_Feel(int32 EntryPoint);
}; // Size: 0x370

#endif
