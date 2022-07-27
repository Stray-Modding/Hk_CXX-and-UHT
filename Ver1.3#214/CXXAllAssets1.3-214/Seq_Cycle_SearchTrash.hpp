#ifndef UE4SS_SDK_Seq_Cycle_SearchTrash_HPP
#define UE4SS_SDK_Seq_Cycle_SearchTrash_HPP

class ASeq_Cycle_SearchTrash_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class AActor* PointInFrontTrash;                                                  // 0x0290 (size: 0x8)
    class AActor* ObjectInHand;                                                       // 0x0298 (size: 0x8)
    bool Seq1;                                                                        // 0x02A0 (size: 0x1)
    class ASeq_Cycle_FollowPath_C* SeqCycleFollowPath1;                               // 0x02A8 (size: 0x8)
    class ASeq_Cycle_FollowPath_C* SeqCycleFollowPath2;                               // 0x02B0 (size: 0x8)
    class ASeq_Cycle_StopToTalk_C* SeqStopToTalk;                                     // 0x02B8 (size: 0x8)
    bool LockedInTrash;                                                               // 0x02C0 (size: 0x1)

    void StartCycleAction();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CancelMovingDroidSequencesAndLockInTrash();
    void CancelSequence();
    void RestartMovingDroidSequence();
    void ExecuteUbergraph_Seq_Cycle_SearchTrash(int32 EntryPoint);
}; // Size: 0x2C1

#endif
