#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnListEntryGeneratedDynamicDelegate.h"
#include "Widget.h"
#include "ESlateVisibility.h"
#include "OnListEntryReleasedDynamicDelegate.h"
#include "UserWidgetPool.h"
#include "ListViewBase.generated.h"

class UUserWidget;

UCLASS(Abstract, HideDropdown)
class UMG_API UListViewBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableScrollAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableFixedLineOffset;
    
    UPROPERTY(EditAnywhere)
    float FixedLineScrollOffset;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnListEntryGeneratedDynamic BP_OnEntryGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FOnListEntryReleasedDynamic BP_OnEntryReleased;
    
    UPROPERTY(Transient)
    FUserWidgetPool EntryWidgetPool;
    
public:
    UListViewBase();
    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(const float InScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToTop();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToBottom();
    
    UFUNCTION(BlueprintCallable)
    void RequestRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateAllEntries();
    
    UFUNCTION(BlueprintPure)
    TArray<UUserWidget*> GetDisplayedEntryWidgets() const;
    
};

