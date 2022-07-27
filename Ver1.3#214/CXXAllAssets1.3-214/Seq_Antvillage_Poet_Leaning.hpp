#ifndef UE4SS_SDK_Seq_Antvillage_Poet_Leaning_HPP
#define UE4SS_SDK_Seq_Antvillage_Poet_Leaning_HPP

class ASeq_Antvillage_Poet_Leaning_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UCOMP_CatUsableSpecialOverride_C* COMP_CatUsableSpecialOverride;            // 0x0278 (size: 0x8)
    class ABP_Droid_C* Poet_Droid;                                                    // 0x0280 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_Antvillage_Poet_Leaning(int32 EntryPoint);
}; // Size: 0x288

#endif
