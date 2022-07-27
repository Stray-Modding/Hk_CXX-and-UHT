#ifndef UE4SS_SDK_Seq_Cycle_StopToTalk_HPP
#define UE4SS_SDK_Seq_Cycle_StopToTalk_HPP

class ASeq_Cycle_StopToTalk_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* PointTalk;
    TArray<class UAnimSequence*> AnimTalk;
    int32 CurrentAnim;
    TArray<class ABP_Droid_C*> Droid_lookAt;

    void StartCycleAction();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_StopToTalk(int32 EntryPoint);
};

#endif
