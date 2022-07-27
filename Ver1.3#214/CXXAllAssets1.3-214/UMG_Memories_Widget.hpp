#ifndef UE4SS_SDK_UMG_Memories_Widget_HPP
#define UE4SS_SDK_UMG_Memories_Widget_HPP

class UUMG_Memories_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUniformGridPanel* main_memories_grid;                                      // 0x0268 (size: 0x8)
    class UUniformGridPanel* side_memories_grid;                                      // 0x0270 (size: 0x8)
    TArray<class UUMG_Drone_MainMemoryButton_C*> main_memories_buttons;               // 0x0278 (size: 0x10)
    TArray<class UUMG_Drone_SideMemoryButton_C*> side_memories_buttons;               // 0x0288 (size: 0x10)
    int32 MainMemoryIndex;                                                            // 0x0298 (size: 0x4)
    int32 SideMemoryIndex;                                                            // 0x029C (size: 0x4)
    int32 SideMemoriesWidth;                                                          // 0x02A0 (size: 0x4)
    class UB12Memories* B12Memories;                                                  // 0x02A8 (size: 0x8)

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
}; // Size: 0x2B0

#endif
