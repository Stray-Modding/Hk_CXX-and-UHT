#ifndef UE4SS_SDK_SEQ_DestroyZurgInstance_HPP
#define UE4SS_SDK_SEQ_DestroyZurgInstance_HPP

class ASEQ_DestroyZurgInstance_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Destroy;                                                                     // 0x0270 (size: 0x1)
    TArray<class ABP_ZurgPawnSlave_C*> ZurkSlaves;                                    // 0x0278 (size: 0x10)

    void LogicTrigger();
    void BndEvt__SEQ_DestroyZurgInstance_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_DestroyZurgInstance(int32 EntryPoint);
}; // Size: 0x288

#endif
