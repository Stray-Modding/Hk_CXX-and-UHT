#ifndef UE4SS_SDK_Dial_B12_Badge_PoliceStation_HPP
#define UE4SS_SDK_Dial_B12_Badge_PoliceStation_HPP

class ADial_B12_Badge_PoliceStation_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* Fake badge;                                                         // 0x0348 (size: 0x8)
    class AActor* DroneTarget;                                                        // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__Dial_B12_Badge_PoliceStation_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_B12_Badge_PoliceStation(int32 EntryPoint);
}; // Size: 0x358

#endif
