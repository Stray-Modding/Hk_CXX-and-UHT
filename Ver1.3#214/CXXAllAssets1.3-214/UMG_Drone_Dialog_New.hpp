#ifndef UE4SS_SDK_UMG_Drone_Dialog_New_HPP
#define UE4SS_SDK_UMG_Drone_Dialog_New_HPP

class UUMG_Drone_Dialog_New_C : public UDialogUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* ShowItemArrowLoop;                                        // 0x0278 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* ShowVisualizedItemName;                                   // 0x0288 (size: 0x8)
    class UWidgetAnimation* HideNameItemsCombo;                                       // 0x0290 (size: 0x8)
    class UWidgetAnimation* ShowItems;                                                // 0x0298 (size: 0x8)
    class UWidgetAnimation* ShowName;                                                 // 0x02A0 (size: 0x8)
    class UBorder* dialog_background;                                                 // 0x02A8 (size: 0x8)
    class UHorizontalBox* dialog_wrapper;                                             // 0x02B0 (size: 0x8)
    class URichTextBlock* DialogLine;                                                 // 0x02B8 (size: 0x8)
    class UCanvasPanel* DialogLineContainer;                                          // 0x02C0 (size: 0x8)
    class UTextBlock* GainedItem_Text;                                                // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_86;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_224;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_377;                                                          // 0x02E8 (size: 0x8)
    class UCanvasPanel* item_visualizer_wrapper;                                      // 0x02F0 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x02F8 (size: 0x8)
    class UImage* ItemRendererImage;                                                  // 0x0300 (size: 0x8)
    class UImage* items_background;                                                   // 0x0308 (size: 0x8)
    class UCanvasPanel* items_panel;                                                  // 0x0310 (size: 0x8)
    class UTextBlock* items_text;                                                     // 0x0318 (size: 0x8)
    class UTextBlock* SpeakerName;                                                    // 0x0320 (size: 0x8)
    class UCanvasPanel* top_slider;                                                   // 0x0328 (size: 0x8)
    class UUMG_Drone_HorizontalInventory_New_C* UMG_Drone_HorizontalInventory_New;    // 0x0330 (size: 0x8)
    class UUMG_VerticalScrollbar_New_C* UMG_VerticalScrollbar_New;                    // 0x0338 (size: 0x8)
    class UImage* vertical_arrow;                                                     // 0x0340 (size: 0x8)
    int32 CurrentLineDisplayedLength;                                                 // 0x0348 (size: 0x4)
    FString CurrentLineString;                                                        // 0x0350 (size: 0x10)
    FString CurrentLineStringWithoutMarkup;                                           // 0x0360 (size: 0x10)
    bool IsInItemSelection;                                                           // 0x0370 (size: 0x1)
    bool IsAtDialogEnd;                                                               // 0x0371 (size: 0x1)
    int32 ItemListOffset;                                                             // 0x0374 (size: 0x4)
    int32 SelectedItemIndex;                                                          // 0x0378 (size: 0x4)
    TArray<class UUMG_Drone_GridButton_C*> Slots;                                     // 0x0380 (size: 0x10)
    class UTalkableComponent* talkable;                                               // 0x0390 (size: 0x8)
    class ULootableComponent* PendingShowItem;                                        // 0x0398 (size: 0x8)
    int32 CurrentHUDStateDisplays;                                                    // 0x03A0 (size: 0x4)
    class ABP_HKHUD_C* HUD;                                                           // 0x03A8 (size: 0x8)
    class ULootableComponent* CurrentHUDSelectedItem;                                 // 0x03B0 (size: 0x8)
    float RenderScale;                                                                // 0x03B8 (size: 0x4)
    float DialogLineYOffset;                                                          // 0x03BC (size: 0x4)
    float ScrollInput;                                                                // 0x03C0 (size: 0x4)
    float ScrollSpeed;                                                                // 0x03C4 (size: 0x4)
    bool IsWaitingForShowItem;                                                        // 0x03C8 (size: 0x1)
    float TimeBetweenLetterDisplay;                                                   // 0x03CC (size: 0x4)
    class ABP_ItemRenderer_C* ItemRenderer;                                           // 0x03D0 (size: 0x8)
    class UMaterialInstanceDynamic* FullPhotoMaterialInstance;                        // 0x03D8 (size: 0x8)
    bool IsVisualizingItem;                                                           // 0x03E0 (size: 0x1)
    class UMaterialInstanceDynamic* BackgroundMaterialInstance;                       // 0x03E8 (size: 0x8)
    class UMaterialInstanceDynamic* ItemsBackgroundMaterialInstance;                  // 0x03F0 (size: 0x8)
    float VerticalRenderLocation;                                                     // 0x03F8 (size: 0x4)
    class UAudioComponent* OpenSound;                                                 // 0x0400 (size: 0x8)
    TEnumAsByte<E_sfx_miaou> NextMiaouSfx;                                            // 0x0408 (size: 0x1)

    void IsInVisualizingItemIntroAnimation(bool& Value);
    void OnLeftVerticalAxis(float _value, bool& _handled);
    void OnLeftHorizontalAxis(float _value, bool& _handled);
    void OnRightHorizontalAxis(float _value, bool& _handled);
    void OnRightVerticalAxis(float _value, bool& _handled);
    void OnDpadDownPressed(bool& _handled);
    void OnDpadDownReleased(bool& _handled);
    void OnDpadUpReleased(bool& _handled);
    void OnDpadUpPressed(bool& _handled);
    void GetSelectedItem(class ULootableComponent*& Lootable);
    void UpdateHUDItemDisplays(class ULootableComponent* Lootable);
    void OnRightPressed(bool& _handled);
    void OnLeftPressed(bool& _handled);
    void OnCancelPressed(bool& _handled);
    void OnXPressed(bool& _handled);
    void OnDisplayed();
    void OnReset();
    void OnDialogLineBegan(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void OnDialogEnded(class UTalkableComponent* _talkableComponent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShowNameAnimationFinished();
    void OnShowItemsRequested();
    void OnShowItemsAnimationFinished();
    void OnAddedObjectToInventory(class ABackpack* _backpack, class ULootableComponent* _loot);
    void OnRemovedObjectFromInventory(class ABackpack* _backpack, class ULootableComponent* _loot);
    void OnInitialized();
    void BeginVisualizeItem(TSubclassOf<class AActor> Item Class, bool IsMemory);
    void EndVisualizeItem();
    void UpdateHudStateDisplays(int32 State);
    void UpdateColors();
    void UpdateRenderScale(float DeltaTime);
    void StopAllContentAnimations();
    void CancelPendingMiaou();
    void SetNextMiaouSfx(TEnumAsByte<E_sfx_miaou> Sfx);
    void ExecuteUbergraph_UMG_Drone_Dialog_New(int32 EntryPoint);
}; // Size: 0x409

#endif
