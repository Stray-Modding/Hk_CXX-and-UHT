#ifndef UE4SS_SDK_BP_HKGameInstance_HPP
#define UE4SS_SDK_BP_HKGameInstance_HPP

class UBP_HKGameInstance_C : public UHKGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 PlayTest_MapIndex;
    class ABP_CatPawn_C* SIEDummyCat;

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
};

#endif
