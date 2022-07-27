#ifndef UE4SS_SDK_BP_ChapterChange_HPP
#define UE4SS_SDK_BP_ChapterChange_HPP

class ABP_ChapterChange_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    EChapter Chapter;                                                                 // 0x0238 (size: 0x1)

    void LogicTrigger();
    void Change Chapter();
    void ExecuteUbergraph_BP_ChapterChange(int32 EntryPoint);
}; // Size: 0x239

#endif
