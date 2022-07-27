#ifndef UE4SS_SDK_DIAL_Street_Dancer_3_Residence_HPP
#define UE4SS_SDK_DIAL_Street_Dancer_3_Residence_HPP

class ADIAL_Street_Dancer_3_Residence_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class ADIAL_Street_Dancer_1_Residence_C* Dial_Dancer_Blue;                        // 0x0350 (size: 0x8)
    class AActor* PointFinal;                                                         // 0x0358 (size: 0x8)
    class AActor* lookat;                                                             // 0x0360 (size: 0x8)
    bool IntermediaryStateDone;                                                       // 0x0368 (size: 0x1)

    void OnDialogBegan();
    void BndEvt__DIAL_Street_Dancer_3_Residence_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnAllCamBroken_Event_0();
    void OnPlateBroken_Event_0();
    void ExecuteUbergraph_DIAL_Street_Dancer_3_Residence(int32 EntryPoint);
}; // Size: 0x369

#endif
