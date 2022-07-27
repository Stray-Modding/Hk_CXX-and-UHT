#ifndef UE4SS_SDK_LevelScript_B12Flat_B12Flat_HPP
#define UE4SS_SDK_LevelScript_B12Flat_B12Flat_HPP

class ALevelScript_B12Flat_B12Flat_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool B12FlatSetUpDone;                                                            // 0x0248 (size: 0x1)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_B12Flat_B12Flat(int32 EntryPoint);
}; // Size: 0x249

#endif
