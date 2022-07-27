#ifndef UE4SS_SDK_UMG_Drone_MemoriesPopup_New_HPP
#define UE4SS_SDK_UMG_Drone_MemoriesPopup_New_HPP

class UUMG_Drone_MemoriesPopup_New_C : public UBackpackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Open;
    class UImage* gradient_background;
    class UImage* Image_86;
    class UUMG_Memories_Widget_C* memories_widget;
    class UImage* progress_icon;
    class UTextBlock* progress_text;
    class ABP_HKHUD_C* HUD;
    class ULootableComponent* CurrentHUDSelectedItem;
    class UCOMP_UsableDroneMemory_C* MemoryUsable;
    float RenderScale;
    FName memoryId;

    void OnDisplayed();
    void OnReset();
    void OnInitialized();
    void PlayMemoryUnlockSequence(FName memoryId);
    void ExecuteUbergraph_UMG_Drone_MemoriesPopup_New(int32 EntryPoint);
};

#endif
