#ifndef UE4SS_SDK_Seq_Cycle_FollowPath_HPP
#define UE4SS_SDK_Seq_Cycle_FollowPath_HPP

class ASeq_Cycle_FollowPath_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AActor*> PathPoints;
    class UAnimSequence* IdleWalkAnim;
    float DelayBetweenPoints;
    int32 CurrentPoint;
    bool Cancelled;
    FSeq_Cycle_FollowPath_CAfterCancelled AfterCancelled;
    void AfterCancelled();

    void StartCycleAction();
    void InstantCancel();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_FollowPath(int32 EntryPoint);
    void AfterCancelled__DelegateSignature();
};

#endif
