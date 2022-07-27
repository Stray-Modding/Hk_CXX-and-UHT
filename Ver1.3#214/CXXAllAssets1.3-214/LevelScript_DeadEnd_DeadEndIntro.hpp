#ifndef UE4SS_SDK_LevelScript_DeadEnd_DeadEndIntro_HPP
#define UE4SS_SDK_LevelScript_DeadEnd_DeadEndIntro_HPP

class ALevelScript_DeadEnd_DeadEndIntro_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ASEQ_DeadEndIntroTransition_C* SeqDeadEndIntroTransition;                   // 0x0248 (size: 0x8)
    bool DeadEndSetUpDone;                                                            // 0x0250 (size: 0x1)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_DeadEnd_DeadEndIntro(int32 EntryPoint);
}; // Size: 0x251

#endif
