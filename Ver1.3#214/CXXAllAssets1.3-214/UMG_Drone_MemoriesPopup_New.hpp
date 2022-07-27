#ifndef UE4SS_SDK_UMG_Drone_MemoriesPopup_New_HPP
#define UE4SS_SDK_UMG_Drone_MemoriesPopup_New_HPP

class UUMG_Drone_MemoriesPopup_New_C : public UBackpackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0278 (size: 0x8)
    class UImage* gradient_background;                                                // 0x0280 (size: 0x8)
    class UImage* Image_86;                                                           // 0x0288 (size: 0x8)
    class UUMG_Memories_Widget_C* memories_widget;                                    // 0x0290 (size: 0x8)
    class UImage* progress_icon;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* progress_text;                                                  // 0x02A0 (size: 0x8)
    class ABP_HKHUD_C* HUD;                                                           // 0x02A8 (size: 0x8)
    class ULootableComponent* CurrentHUDSelectedItem;                                 // 0x02B0 (size: 0x8)
    class UCOMP_UsableDroneMemory_C* MemoryUsable;                                    // 0x02B8 (size: 0x8)
    float RenderScale;                                                                // 0x02C0 (size: 0x4)
    FName memoryId;                                                                   // 0x02C4 (size: 0x8)

    void OnDisplayed();
    void OnReset();
    void OnInitialized();
    void PlayMemoryUnlockSequence(FName memoryId);
    void ExecuteUbergraph_UMG_Drone_MemoriesPopup_New(int32 EntryPoint);
}; // Size: 0x2CC

#endif
