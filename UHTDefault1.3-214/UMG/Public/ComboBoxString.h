#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ComboBoxStyle -FallbackName=ComboBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TableRowStyle -FallbackName=TableRowStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "ComboBoxString.generated.h"

UCLASS()
class UMG_API UComboBoxString : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedEvent, const FString&, SelectedItem, TEnumAsByte<ESelectInfo::Type>, SelectionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpeningEvent);
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultOptions;
    
    UPROPERTY(EditAnywhere)
    FString SelectedOption;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTableRowStyle ItemStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ContentPadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxListHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool HasDownArrow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool EnableGamepadNavigationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UPROPERTY(EditAnywhere)
    UWidget::FGenerateWidgetForString OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionChangedEvent OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnOpeningEvent OnOpening;
    
    UComboBoxString();
    UFUNCTION(BlueprintCallable)
    void SetSelectedOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptions();
    
    UFUNCTION(BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSelectedOption() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOptionCount() const;
    
    UFUNCTION(BlueprintPure)
    FString GetOptionAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindOptionIndex(const FString& Option) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearOptions();
    
    UFUNCTION(BlueprintCallable)
    void AddOption(const FString& Option);
    
};

