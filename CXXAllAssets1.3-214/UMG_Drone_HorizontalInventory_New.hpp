#ifndef UE4SS_SDK_UMG_Drone_HorizontalInventory_New_HPP
#define UE4SS_SDK_UMG_Drone_HorizontalInventory_New_HPP

class UUMG_Drone_HorizontalInventory_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* left_arrow;                                                         // 0x0268 (size: 0x8)
    class UImage* right_arrow;                                                        // 0x0270 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_0;                    // 0x0278 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_1;                    // 0x0280 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_2;                    // 0x0288 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_3;                    // 0x0290 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_4;                    // 0x0298 (size: 0x8)
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_5;                    // 0x02A0 (size: 0x8)
    class ABP_Backpack_C* Backpack;                                                   // 0x02A8 (size: 0x8)
    TArray<class UUMG_Drone_GridButton_New_C*> Slots;                                 // 0x02B0 (size: 0x10)
    int32 Offset;                                                                     // 0x02C0 (size: 0x4)
    int32 CurrentSelection;                                                           // 0x02C4 (size: 0x4)
    FUMG_Drone_HorizontalInventory_New_CSelectionChanged SelectionChanged;            // 0x02C8 (size: 0x10)
    void SelectionChanged(int32 PreviousSelection, int32 NewSelection);

    void GetSelectedItem(class ULootableComponent*& Lootable);
    void GetCurrentSelection(int32& Index);
    void SetCurrentSelection(int32 Index, bool PlaySound);
    void UpdateVisual();
    void OnInitialized();
    void SetBackpack(class ABP_Backpack_C* Backpack);
    void OnInventoryChanged(class ABackpack* _backpack, class ULootableComponent* _loot);
    void ExecuteUbergraph_UMG_Drone_HorizontalInventory_New(int32 EntryPoint);
    void SelectionChanged__DelegateSignature(int32 PreviousSelection, int32 NewSelection);
}; // Size: 0x2D8

#endif
