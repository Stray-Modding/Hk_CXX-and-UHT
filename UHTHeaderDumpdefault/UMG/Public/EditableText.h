#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextStyle -FallbackName=EditableTextStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "EVirtualKeyboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=VirtualKeyboardOptions -FallbackName=VirtualKeyboardOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardTrigger -FallbackName=EVirtualKeyboardTrigger
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardDismissAction -FallbackName=EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "ShapedTextOptions.h"
#include "EditableText.generated.h"

class USlateBrushAsset;
class USlateWidgetStyleAsset;

UCLASS()
class UMG_API UEditableText : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEditableTextCommittedEvent, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEditableTextChangedEvent, const FText&, Text);
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    UWidget::FGetText HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImageSelected;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImageComposing;
    
    UPROPERTY()
    USlateBrushAsset* CaretImage;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY()
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    bool IsReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool IsPassword;
    
    UPROPERTY(EditAnywhere)
    float MinimumDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
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
    FOnEditableTextChangedEvent OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEditableTextCommittedEvent OnTextCommitted;
    
    UEditableText();
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool InbIsReadyOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPassword(bool InbIsPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
};

