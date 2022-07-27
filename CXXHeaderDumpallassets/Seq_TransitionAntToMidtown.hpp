#ifndef UE4SS_SDK_Seq_TransitionAntToMidtown_HPP
#define UE4SS_SDK_Seq_TransitionAntToMidtown_HPP

class ASeq_TransitionAntToMidtown_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class AActor* PipePos;                                                            // 0x0278 (size: 0x8)
    class ASEQ_CatFromAntVillage_C* seqcatfromantvillage;                             // 0x0280 (size: 0x8)
    class ACameraActor* Cam;                                                          // 0x0288 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_Seq_TransitionAntToMidtown(int32 EntryPoint);
}; // Size: 0x290

#endif
