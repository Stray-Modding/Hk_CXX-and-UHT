#ifndef UE4SS_SDK_BP_HKGameInstance_HPP
#define UE4SS_SDK_BP_HKGameInstance_HPP

class UBP_HKGameInstance_C : public UHKGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    int32 PlayTest_MapIndex;                                                          // 0x04C8 (size: 0x4)
    class ABP_CatPawn_C* SIEDummyCat;                                                 // 0x04D0 (size: 0x8)

    void SetAdventureState(int32 _chapterId, int32 _stateId);
    int32 GetCurrentAdventureChapterState(int32 _chapter);
    int32 GetCurrentAdventureChapter();
    TArray<FString> GetAdventureChapters();
    TArray<FString> GetAdventureChapterStates(int32 _chapter);
    void GetSIEDummyCat(class ABP_CatPawn_C*& cat);
    void GetPlayTestMap(int32& PlayTest_MapIndex);
    void SetPlayTestMap(int32 PlayTest_MapIndex);
    void OnStartPlayInEditorGameInstance(bool _simulateInEditor);
    void ExecuteUbergraph_BP_HKGameInstance(int32 EntryPoint);
}; // Size: 0x4D8

#endif
