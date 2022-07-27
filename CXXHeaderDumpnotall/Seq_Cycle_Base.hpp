#ifndef UE4SS_SDK_Seq_Cycle_Base_HPP
#define UE4SS_SDK_Seq_Cycle_Base_HPP

class ASeq_Cycle_Base_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool activated;
    bool StartWithThis;
    class ABP_Droid_C* Droid;
    class AActor* nextSeq;

    void OnStartSequence();
    void LogicTrigger();
    void StartnextSeq();
    void StartCycleAction();
    void SetActivSeq();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_Base(int32 EntryPoint);
};

#endif
