#pragma once
#include "CoreMinimal.h"
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardDismissAction -FallbackName=EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=VirtualKeyboardOptions -FallbackName=VirtualKeyboardOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "MultiLineEditableText.generated.h"

UCLASS()
class UMG_API UMultiLineEditableText : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMultiLineEditableTextCommittedEvent, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiLineEditableTextChangedEvent, const FText&, Text);
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    UWidget::FGetText HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsReadOnly;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearTextSelectionOnFocusLoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextChangedEvent OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextCommittedEvent OnTextCommitted;
    
    UMultiLineEditableText();
    UFUNCTION(BlueprintCallable)
    void SetWidgetStyle(const FTextBlockStyle& InWidgetStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetHintText() const;
    
};

