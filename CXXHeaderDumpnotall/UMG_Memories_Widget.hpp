#ifndef UE4SS_SDK_UMG_Memories_Widget_HPP
#define UE4SS_SDK_UMG_Memories_Widget_HPP

class UUMG_Memories_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* main_memories_grid;
    class UUniformGridPanel* side_memories_grid;
    TArray<class UUMG_Drone_MainMemoryButton_C*> main_memories_buttons;
    TArray<class UUMG_Drone_SideMemoryButton_C*> side_memories_buttons;
    int32 MainMemoryIndex;
    int32 SideMemoryIndex;
    int32 SideMemoriesWidth;
    class UB12Memories* B12Memories;

    void AnimateMemoryUnlock(FName memoryId);
    void MoveRight();
    void MoveLeft();
    void MoveDown();
    void MoveUp();
    void UpdateMemoriesDisplay();
    void SetSideMemoryIndex(int32 Index, bool PlaySound);
    void SetMainMemoryIndex(int32 Index, bool PlaySound);
    void CreateMemoryGrids(class UB12Memories* MemoriesData);
    void GetPreviousUnlockedMemoryIndex(int32& MainIndex, int32& SideIndex);
    void GetNextUnlockedMemoryIndex(int32& MainIndex, int32& SideIndex);
    void GetSelectedMemory(FB12MemoryData& MemoryData, bool& IsValid);
    void OnInitialized();
    void ExecuteUbergraph_UMG_Memories_Widget(int32 EntryPoint);
};

#endif
