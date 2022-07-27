#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextBoxStyle -FallbackName=EditableTextBoxStyle
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "EVirtualKeyboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=VirtualKeyboardOptions -FallbackName=VirtualKeyboardOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardTrigger -FallbackName=EVirtualKeyboardTrigger
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardDismissAction -FallbackName=EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "ShapedTextOptions.h"
#include "EditableTextBox.generated.h"

class USlateWidgetStyleAsset;

UCLASS()
class UMG_API UEditableTextBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEditableTextBoxCommittedEvent, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEditableTextBoxChangedEvent, const FText&, Text);
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    UWidget::FGetText HintTextDelegate;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY()
    FLinearColor ForegroundColor;
    
    UPROPERTY()
    FLinearColor BackgroundColor;
    
    UPROPERTY()
    FLinearColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsReadOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPassword;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumDesiredWidth;
    
    UPROPERTY()
    FMargin Padding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FShapedTextOptions ShapedTextOptions;
    
    UPROPERTY(BlueprintAssignable)
    FOnEditableTextBoxChangedEvent OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEditableTextBoxCommittedEvent OnTextCommitted;
    
    UEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPassword(bool bIsPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetError(FText InError);
    
    UFUNCTION(BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearError();
    
};

