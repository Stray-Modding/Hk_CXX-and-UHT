#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonPressMethod -FallbackName=EButtonPressMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonClickMethod -FallbackName=EButtonClickMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonTouchMethod -FallbackName=EButtonTouchMethod
#include "OnCheckBoxComponentStateChangedDelegate.h"
#include "CheckBox.generated.h"

class USlateWidgetStyleAsset;
class USlateBrushAsset;

UCLASS()
class UMG_API UCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECheckBoxState CheckedState;
    
    UPROPERTY()
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedImage;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedPressedImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedPressedImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedPressedImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY()
    FMargin Padding;
    
    UPROPERTY()
    FSlateColor BorderBackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FOnCheckBoxComponentStateChanged OnCheckStateChanged;
    
    UCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
};

