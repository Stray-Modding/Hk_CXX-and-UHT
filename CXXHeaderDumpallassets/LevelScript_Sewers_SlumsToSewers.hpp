#ifndef UE4SS_SDK_LevelScript_Sewers_SlumsToSewers_HPP
#define UE4SS_SDK_LevelScript_Sewers_SlumsToSewers_HPP

class ALevelScript_Sewers_SlumsToSewers_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0248 (size: 0x8)
    class ATriggerZone_C* triggerzonemomo;                                            // 0x0250 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_Sewers_SlumsToSewers(int32 EntryPoint);
}; // Size: 0x258

#endif
