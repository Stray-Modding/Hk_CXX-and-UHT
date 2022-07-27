#ifndef UE4SS_SDK_LevelScript_SlumsPart2_ProcQuestFlats_HPP
#define UE4SS_SDK_LevelScript_SlumsPart2_ProcQuestFlats_HPP

class ALevelScript_SlumsPart2_ProcQuestFlats_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool SlumsPart2SetUpDone;                                                         // 0x0248 (size: 0x1)
    class ABP_CoffreFort_C* CoffreFort;                                               // 0x0250 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_SlumsPart2_ProcQuestFlats(int32 EntryPoint);
}; // Size: 0x258

#endif
