#pragma once
#include "CoreMinimal.h"
#include "ListViewBase.h"
#include "OnItemIsHoveredChangedDynamicDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ESelectionMode -FallbackName=ESelectionMode
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EConsumeMouseWheel -FallbackName=EConsumeMouseWheel
#include "OnListEntryInitializedDynamicDelegate.h"
#include "SimpleListItemEventDynamicDelegate.h"
#include "OnListItemSelectionChangedDynamicDelegate.h"
#include "OnListItemScrolledIntoViewDynamicDelegate.h"
#include "ListView.generated.h"

class UObject;

UCLASS()
class UMG_API UListView : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClearSelectionOnClick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReturnFocusToSelection;
    
    UPROPERTY(Transient)
    TArray<UObject*> ListItems;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnListEntryInitializedDynamic BP_OnEntryInitialized;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleListItemEventDynamic BP_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleListItemEventDynamic BP_OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemIsHoveredChangedDynamic BP_OnItemIsHoveredChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnListItemSelectionChangedDynamic BP_OnItemSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnListItemScrolledIntoViewDynamic BP_OnItemScrolledIntoView;
    
public:
    UListView();
    UFUNCTION(BlueprintCallable)
    void SetSelectionMode(TEnumAsByte<ESelectionMode::Type> NewSelectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ScrollIndexIntoView(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    bool IsRefreshPending() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UObject*> GetListItems() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetItemAt(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexForItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearListItems();
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_SetSelectedItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetListItems(const TArray<UObject*>& InListItems);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetItemSelection(UObject* Item, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void BP_ScrollItemIntoView(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_NavigateToItem(UObject* Item);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsItemVisible(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool BP_GetSelectedItems(TArray<UObject*>& Items) const;
    
    UFUNCTION(BlueprintPure)
    UObject* BP_GetSelectedItem() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelScrollIntoView();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* Item);
    
};

