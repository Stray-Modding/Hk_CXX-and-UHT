#ifndef UE4SS_SDK_UMG_Drone_Menu_New_HPP
#define UE4SS_SDK_UMG_Drone_Menu_New_HPP

class UUMG_Drone_Menu_New_C : public UDroneMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0278 (size: 0x8)
    class UWidgetAnimation* MemoryDarkOverlayFadeIn;                                  // 0x0280 (size: 0x8)
    class UImage* Background;                                                         // 0x0288 (size: 0x8)
    class UImage* foreground;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_86;                                                           // 0x0298 (size: 0x8)
    class UUMG_Drone_HorizontalInventory_New_C* inventory_display;                    // 0x02A0 (size: 0x8)
    class UCanvasPanel* inventory_panel;                                              // 0x02A8 (size: 0x8)
    class UCanvasPanel* inventory_tab_active;                                         // 0x02B0 (size: 0x8)
    class UTextBlock* inventory_tab_active_text;                                      // 0x02B8 (size: 0x8)
    class UCanvasPanel* inventory_tab_inactive;                                       // 0x02C0 (size: 0x8)
    class UTextBlock* inventory_tab_inactive_text;                                    // 0x02C8 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x02D0 (size: 0x8)
    class UCanvasPanel* memories_panel;                                               // 0x02D8 (size: 0x8)
    class UCanvasPanel* memories_tab_active;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* memories_tab_active_text;                                       // 0x02E8 (size: 0x8)
    class UCanvasPanel* memories_tab_inactive;                                        // 0x02F0 (size: 0x8)
    class UTextBlock* memories_tab_inactive_text;                                     // 0x02F8 (size: 0x8)
    class UUMG_Memories_Widget_C* memories_widget;                                    // 0x0300 (size: 0x8)
    class UImage* memory_dark_overlay;                                                // 0x0308 (size: 0x8)
    class UImage* memory_image;                                                       // 0x0310 (size: 0x8)
    class UImage* memory_object_viewer;                                               // 0x0318 (size: 0x8)
    class UTextBlock* memory_subtext;                                                 // 0x0320 (size: 0x8)
    class UCanvasPanel* memory_text_container;                                        // 0x0328 (size: 0x8)
    class UTextBlock* memory_text_content;                                            // 0x0330 (size: 0x8)
    class URichTextBlock* memory_text_content_rich;                                   // 0x0338 (size: 0x8)
    class UImage* progress_icon;                                                      // 0x0340 (size: 0x8)
    class UTextBlock* progress_text;                                                  // 0x0348 (size: 0x8)
    class UBorder* Root;                                                              // 0x0350 (size: 0x8)
    class UImage* ZoomDisplay;                                                        // 0x0358 (size: 0x8)
    TArray<class UUMG_Drone_GridButton_C*> Slots;                                     // 0x0360 (size: 0x10)
    TEnumAsByte<EDroneMenuCategory> Category;                                         // 0x0370 (size: 0x1)
    class ABP_ItemRenderer_C* ItemRenderer;                                           // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* FullPhotoMaterialInstance;                        // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* GlitchedMemoryMaterialInstance;                   // 0x0388 (size: 0x8)
    class ULootableComponent* HighlightedItem;                                        // 0x0390 (size: 0x8)
    class ABP_HKHUD_C* HUD;                                                           // 0x0398 (size: 0x8)
    TEnumAsByte<E_DroneMenuActionDisplayState> CurrentActionDisplayState;             // 0x03A0 (size: 0x1)
    class ULootableComponent* CurrentActionDisplaySelectedItem;                       // 0x03A8 (size: 0x8)
    float RenderScale;                                                                // 0x03B0 (size: 0x4)
    float VerticalRenderLocation;                                                     // 0x03B4 (size: 0x4)
    bool HasSelectedMemory;                                                           // 0x03B8 (size: 0x1)
    float MemoryTextOffset;                                                           // 0x03BC (size: 0x4)
    float MemoryTextScrollSpeed;                                                      // 0x03C0 (size: 0x4)
    float MemoryTextScrollInput;                                                      // 0x03C4 (size: 0x4)
    float MemoryTextBaseY;                                                            // 0x03C8 (size: 0x4)
    FName CurrentActionDisplaySelectedMemory;                                         // 0x03CC (size: 0x8)
    bool CurrentShowItemEnabled;                                                      // 0x03D4 (size: 0x1)
    TArray<class UUMG_Drone_MainMemoryButton_C*> main_memories_buttons;               // 0x03D8 (size: 0x10)
    TArray<class UUMG_Drone_SideMemoryButton_C*> side_memories_buttons;               // 0x03E8 (size: 0x10)
    int32 MainMemoryIndex;                                                            // 0x03F8 (size: 0x4)
    int32 SideMemoryIndex;                                                            // 0x03FC (size: 0x4)
    int32 SideMemoriesWidth;                                                          // 0x0400 (size: 0x4)
    TEnumAsByte<E_MemorySelectionState> MemorySelectionState;                         // 0x0404 (size: 0x1)
    bool CurrentDisplayReadMemory;                                                    // 0x0405 (size: 0x1)
    bool DisplayExamine;                                                              // 0x0406 (size: 0x1)

    void OnRightVerticalAxis(float _value, bool& _handled);
    void OnRightHorizontalAxis(float _value, bool& _handled);
    void OnLeftVerticalAxis(float _value, bool& _handled);
    void OnLeftHorizontalAxis(float _value, bool& _handled);
    void OnXPressed(bool& _handled);
    void UpdateActionDisplays();
    void OnRightTriggerAxis(float _value, bool& _handled);
    void OnLeftTriggerAxis(float _value, bool& _handled);
    void UpdateMemoryDisplay(bool Revealed, bool Unlocked, FB12MemoryData Data);
    void GetSelectedMemory(FB12MemoryData& MemoryData, bool& IsValid);
    TEnumAsByte<EDroneMenuCategory> GetCategory();
    void GetPreviousCategory(TEnumAsByte<EDroneMenuCategory> Category, TEnumAsByte<EDroneMenuCategory>& PreviousCategory);
    void GetNextCategory(TEnumAsByte<EDroneMenuCategory> Category, TEnumAsByte<EDroneMenuCategory>& NextCategory);
    void GetSelectedItem(class ULootableComponent*& Lootable);
    void OnValidatePressed(bool& _handled);
    void OnLBPressed(bool& _handled);
    void OnRBPressed(bool& _handled);
    void CategoryToText(TEnumAsByte<EDroneMenuCategory> Category, FText& Text);
    void UpdateVisual();
    void OnDownPressed(bool& _handled);
    void OnLeftPressed(bool& _handled);
    void OnRightPressed(bool& _handled);
    void OnUpPressed(bool& _handled);
    void OnCancelPressed(bool& _handled);
    void OnDisplayed();
    void OnReset();
    void OnItemBeginHighlight(class ULootableComponent* Lootable);
    void OnItemEndHighlight(class ULootableComponent* Lootable);
    void OnBackpackInventoryChange(class ABackpack* _backpack, class ULootableComponent* _loot);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetCategory(TEnumAsByte<EDroneMenuCategory> _category);
    void OnInitialized();
    void OnIventoryItemGridSelectionChanged(int32 PreviousSelection, int32 NewSelection);
    void PreConstruct(bool IsDesignTime);
    void SetMemorySelectionState(TEnumAsByte<E_MemorySelectionState> MemorySelectionState);
    void ExecuteUbergraph_UMG_Drone_Menu_New(int32 EntryPoint);
}; // Size: 0x407

#endif
