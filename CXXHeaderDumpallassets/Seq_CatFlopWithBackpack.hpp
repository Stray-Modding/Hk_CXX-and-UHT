#ifndef UE4SS_SDK_Seq_CatFlopWithBackpack_HPP
#define UE4SS_SDK_Seq_CatFlopWithBackpack_HPP

class ASeq_CatFlopWithBackpack_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* catFallVibe;                                               // 0x0270 (size: 0x8)
    bool FlopLoopStarted;                                                             // 0x0278 (size: 0x1)
    class ADialog* Dial;                                                              // 0x0280 (size: 0x8)
    class ATriggerZone_C* Trigger zone stop;                                          // 0x0288 (size: 0x8)
    int32 Flop_Count;                                                                 // 0x0290 (size: 0x4)

    void StartFlop();
    void OnStartSequence();
    void BndEvt__Seq_CatFlopWithBackpack_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void StopLoop_StartDial();
    void ExecuteUbergraph_Seq_CatFlopWithBackpack(int32 EntryPoint);
}; // Size: 0x294

#endif
