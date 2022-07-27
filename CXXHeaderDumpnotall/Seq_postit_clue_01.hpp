#ifndef UE4SS_SDK_Seq_postit_clue_01_HPP
#define UE4SS_SDK_Seq_postit_clue_01_HPP

class ASeq_postit_clue_01_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_DigicodeTrigger_C* Digicode;
    class ABP_CoffreFort_digicod_C* safe_digicode;
    bool PostItLooted;

    void LogicTrigger();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_postit_clue_01(int32 EntryPoint);
};

#endif
