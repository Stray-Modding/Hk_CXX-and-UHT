#ifndef UE4SS_SDK_UMG_Drone_UsableItem_HPP
#define UE4SS_SDK_UMG_Drone_UsableItem_HPP

class UUMG_Drone_UsableItem_C : public UDialogUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0278 (size: 0x8)
    class UImage* gradient_background;                                                // 0x0280 (size: 0x8)
    class UImage* Image_86;                                                           // 0x0288 (size: 0x8)
    class UTextBlock* item_name;                                                      // 0x0290 (size: 0x8)
    class UUMG_Drone_HorizontalInventory_New_C* UMG_Drone_HorizontalInventory_New;    // 0x0298 (size: 0x8)
    class ABP_HKHUD_C* HUD;                                                           // 0x02A0 (size: 0x8)
    class ULootableComponent* CurrentHUDSelectedItem;                                 // 0x02A8 (size: 0x8)
    class UCOMP_UsableItem_C* UsableItem;                                             // 0x02B0 (size: 0x8)
    float RenderScale;                                                                // 0x02B8 (size: 0x4)

    void UpdateHUDItemDisplays(class ULootableComponent* Lootable);
    void OnRightPressed(bool& _handled);
    void OnLeftPressed(bool& _handled);
    void OnCancelPressed(bool& _handled);
    void UpdateVisual();
    void OnXPressed(bool& _handled);
    void OnDisplayed();
    void OnReset();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInventoryChanged(class ABackpack* _backpack, class ULootableComponent* _loot);
    void OnInitialized();
    void ExecuteUbergraph_UMG_Drone_UsableItem(int32 EntryPoint);
}; // Size: 0x2BC

#endif
