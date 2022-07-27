#ifndef UE4SS_SDK_Seq_Antvillage_DivingDroid_HPP
#define UE4SS_SDK_Seq_Antvillage_DivingDroid_HPP

class ASeq_Antvillage_DivingDroid_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Diving_Droid;                                                  // 0x0278 (size: 0x8)
    class AActor* PaintBucket;                                                        // 0x0280 (size: 0x8)

    void LogicTrigger();
    void BndEvt__Seq_Antvillage_DivingDroid_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_Antvillage_DivingDroid(int32 EntryPoint);
}; // Size: 0x288

#endif
