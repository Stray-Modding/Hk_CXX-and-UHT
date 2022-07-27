#ifndef UE4SS_SDK_Dial_B12_Badge_Shopsafe_HPP
#define UE4SS_SDK_Dial_B12_Badge_Shopsafe_HPP

class ADial_B12_Badge_Shopsafe_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* Fake badge;                                                         // 0x0348 (size: 0x8)
    class AActor* DroneTarget;                                                        // 0x0350 (size: 0x8)
    class ABP_CoffreFort_digicod_C* Safe;                                             // 0x0358 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0360 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_B12_Badge_Shopsafe(int32 EntryPoint);
}; // Size: 0x368

#endif
