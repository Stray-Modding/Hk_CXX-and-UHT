#ifndef UE4SS_SDK_LevelScript_Jail_Global_HPP
#define UE4SS_SDK_LevelScript_Jail_Global_HPP

class ALevelScript_Jail_Global_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ASeq_B12_IsFree_C* Seq_B12IsFree;                                           // 0x0248 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_Jail_Global(int32 EntryPoint);
}; // Size: 0x250

#endif
