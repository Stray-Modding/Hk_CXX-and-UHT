#ifndef UE4SS_SDK_LevelScript_Rooftops_Global_HPP
#define UE4SS_SDK_LevelScript_Rooftops_Global_HPP

class ALevelScript_Rooftops_Global_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool RooftopsSetUpDone;                                                           // 0x0248 (size: 0x1)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_Rooftops_Global(int32 EntryPoint);
}; // Size: 0x249

#endif
