#ifndef UE4SS_SDK_Seq_Cycle_FollowPath_HPP
#define UE4SS_SDK_Seq_Cycle_FollowPath_HPP

class ASeq_Cycle_FollowPath_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    TArray<class AActor*> PathPoints;                                                 // 0x0290 (size: 0x10)
    class UAnimSequence* IdleWalkAnim;                                                // 0x02A0 (size: 0x8)
    float DelayBetweenPoints;                                                         // 0x02A8 (size: 0x4)
    int32 CurrentPoint;                                                               // 0x02AC (size: 0x4)
    bool Cancelled;                                                                   // 0x02B0 (size: 0x1)
    FSeq_Cycle_FollowPath_CAfterCancelled AfterCancelled;                             // 0x02B8 (size: 0x10)
    void AfterCancelled();

    void StartCycleAction();
    void InstantCancel();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_FollowPath(int32 EntryPoint);
    void AfterCancelled__DelegateSignature();
}; // Size: 0x2C8

#endif
