#ifndef UE4SS_SDK_Seq_postit_clue_01_HPP
#define UE4SS_SDK_Seq_postit_clue_01_HPP

class ASeq_postit_clue_01_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_DigicodeTrigger_C* Digicode;                                            // 0x0270 (size: 0x8)
    class ABP_CoffreFort_digicod_C* safe_digicode;                                    // 0x0278 (size: 0x8)
    bool PostItLooted;                                                                // 0x0280 (size: 0x1)

    void LogicTrigger();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_postit_clue_01(int32 EntryPoint);
}; // Size: 0x281

#endif
