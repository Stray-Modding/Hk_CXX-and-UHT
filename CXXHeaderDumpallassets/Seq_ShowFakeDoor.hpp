#ifndef UE4SS_SDK_Seq_ShowFakeDoor_HPP
#define UE4SS_SDK_Seq_ShowFakeDoor_HPP

class ASeq_ShowFakeDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class AActor* FakeDoor;                                                           // 0x0270 (size: 0x8)
    bool Show;                                                                        // 0x0278 (size: 0x1)

    void LogicTrigger();
    void BndEvt__Seq_ShowFakeDoor_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_ShowFakeDoor(int32 EntryPoint);
}; // Size: 0x279

#endif
