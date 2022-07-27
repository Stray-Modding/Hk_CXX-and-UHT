#pragma once
#include "CoreMinimal.h"
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardDismissAction -FallbackName=EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextBoxStyle -FallbackName=EditableTextBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=VirtualKeyboardOptions -FallbackName=VirtualKeyboardOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MultiLineEditableTextBox.generated.h"

class USlateWidgetStyleAsset;

UCLASS()
class UMG_API UMultiLineEditableTextBox : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMultiLineEditableTextBoxCommittedEvent, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiLineEditableTextBoxChangedEvent, const FText&, Text);
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    UWidget::FGetText HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsReadOnly;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY()
    FLinearColor ForegroundColor;
    
    UPROPERTY()
    FLinearColor BackgroundColor;
    
    UPROPERTY()
    FLinearColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextBoxChangedEvent OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextBoxCommittedEvent OnTextCommitted;
    
    UMultiLineEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(const FTextBlockStyle& InTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintCallable)
    void SetError(FText InError);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetHintText() const;
    
};

