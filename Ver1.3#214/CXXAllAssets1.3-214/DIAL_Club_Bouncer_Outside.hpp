#ifndef UE4SS_SDK_DIAL_Club_Bouncer_Outside_HPP
#define UE4SS_SDK_DIAL_Club_Bouncer_Outside_HPP

class ADIAL_Club_Bouncer_Outside_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class ASeq_MidtownProgress_DroidState_C* ProgressionMidtown;                      // 0x0350 (size: 0x8)
    int32 AnimCount;                                                                  // 0x0358 (size: 0x4)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__DIAL_Club_Bouncer_Outside_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_Club_Bouncer_Outside(int32 EntryPoint);
}; // Size: 0x35C

#endif
