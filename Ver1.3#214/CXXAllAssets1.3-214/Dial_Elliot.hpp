#ifndef UE4SS_SDK_Dial_Elliot_HPP
#define UE4SS_SDK_Dial_Elliot_HPP

class ADial_Elliot_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Elliot;                                                        // 0x0348 (size: 0x8)
    bool Elliot_Met;                                                                  // 0x0350 (size: 0x1)
    bool Elliot_need_a_poncho;                                                        // 0x0351 (size: 0x1)
    bool Elliot_has_the_poncho;                                                       // 0x0352 (size: 0x1)
    bool Cold;                                                                        // 0x0353 (size: 0x1)
    class AActor* Fake_Tracker;                                                       // 0x0358 (size: 0x8)
    class AActor* poncho;                                                             // 0x0360 (size: 0x8)
    class ASeq_Roberto_Tracking_C* Seq_Roberto_Tracking;                              // 0x0368 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Elliot(int32 EntryPoint);
}; // Size: 0x370

#endif
