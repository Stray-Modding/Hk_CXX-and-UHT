#ifndef UE4SS_SDK_Seq_Cycle_SearchTrash_HPP
#define UE4SS_SDK_Seq_Cycle_SearchTrash_HPP

class ASeq_Cycle_SearchTrash_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* PointInFrontTrash;
    class AActor* ObjectInHand;
    bool Seq1;
    class ASeq_Cycle_FollowPath_C* SeqCycleFollowPath1;
    class ASeq_Cycle_FollowPath_C* SeqCycleFollowPath2;
    class ASeq_Cycle_StopToTalk_C* SeqStopToTalk;
    bool LockedInTrash;

    void StartCycleAction();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CancelMovingDroidSequencesAndLockInTrash();
    void CancelSequence();
    void RestartMovingDroidSequence();
    void ExecuteUbergraph_Seq_Cycle_SearchTrash(int32 EntryPoint);
};

#endif
