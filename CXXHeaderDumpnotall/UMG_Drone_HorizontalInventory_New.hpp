#ifndef UE4SS_SDK_UMG_Drone_HorizontalInventory_New_HPP
#define UE4SS_SDK_UMG_Drone_HorizontalInventory_New_HPP

class UUMG_Drone_HorizontalInventory_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* left_arrow;
    class UImage* right_arrow;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_0;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_1;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_2;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_3;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_4;
    class UUMG_Drone_GridButton_New_C* UMG_Drone_GridButton_New_5;
    class ABP_Backpack_C* Backpack;
    TArray<class UUMG_Drone_GridButton_New_C*> Slots;
    int32 Offset;
    int32 CurrentSelection;
    FUMG_Drone_HorizontalInventory_New_CSelectionChanged SelectionChanged;
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
};

#endif
