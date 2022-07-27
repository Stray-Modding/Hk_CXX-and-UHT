#ifndef UE4SS_SDK_Seq_Cycle_StopToTalk_HPP
#define UE4SS_SDK_Seq_Cycle_StopToTalk_HPP

class ASeq_Cycle_StopToTalk_C : public ASeq_Cycle_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class AActor* PointTalk;                                                          // 0x0290 (size: 0x8)
    TArray<class UAnimSequence*> AnimTalk;                                            // 0x0298 (size: 0x10)
    int32 CurrentAnim;                                                                // 0x02A8 (size: 0x4)
    TArray<class ABP_Droid_C*> Droid_lookAt;                                          // 0x02B0 (size: 0x10)

    void StartCycleAction();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_StopToTalk(int32 EntryPoint);
}; // Size: 0x2C0

#endif
