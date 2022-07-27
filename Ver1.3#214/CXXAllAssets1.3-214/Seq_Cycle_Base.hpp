#ifndef UE4SS_SDK_Seq_Cycle_Base_HPP
#define UE4SS_SDK_Seq_Cycle_Base_HPP

class ASeq_Cycle_Base_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool activated;                                                                   // 0x0270 (size: 0x1)
    bool StartWithThis;                                                               // 0x0271 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x0278 (size: 0x8)
    class AActor* nextSeq;                                                            // 0x0280 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void StartnextSeq();
    void StartCycleAction();
    void SetActivSeq();
    void CancelSequence();
    void ExecuteUbergraph_Seq_Cycle_Base(int32 EntryPoint);
}; // Size: 0x288

#endif
