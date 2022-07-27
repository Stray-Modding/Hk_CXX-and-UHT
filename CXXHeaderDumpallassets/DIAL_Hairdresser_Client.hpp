#ifndef UE4SS_SDK_DIAL_Hairdresser_Client_HPP
#define UE4SS_SDK_DIAL_Hairdresser_Client_HPP

class ADIAL_Hairdresser_Client_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* Feedback;                                                           // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__DIAL_Hairdresser_Client_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_Hairdresser_Client(int32 EntryPoint);
}; // Size: 0x358

#endif
