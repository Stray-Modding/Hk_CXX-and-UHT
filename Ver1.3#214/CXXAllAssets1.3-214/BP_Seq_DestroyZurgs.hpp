#ifndef UE4SS_SDK_BP_Seq_DestroyZurgs_HPP
#define UE4SS_SDK_BP_Seq_DestroyZurgs_HPP

class ABP_Seq_DestroyZurgs_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    float Delay Before Triggered;                                                     // 0x0270 (size: 0x4)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToDestroy;                              // 0x0278 (size: 0x10)
    TArray<class ABP_ZurgNest_C*> NestToDestroy;                                      // 0x0288 (size: 0x10)
    TArray<class ABP_props_base_C*> PropstoDestroy;                                   // 0x0298 (size: 0x10)
    bool Destroyed;                                                                   // 0x02A8 (size: 0x1)
    bool needToBeSaved;                                                               // 0x02A9 (size: 0x1)

    void LogicTrigger();
    void BndEvt__BP_Seq_DestroyZurgs_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Destroy();
    void ExecuteUbergraph_BP_Seq_DestroyZurgs(int32 EntryPoint);
}; // Size: 0x2AA

#endif
