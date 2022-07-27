#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SpinBoxStyle -FallbackName=SpinBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "SpinBox.generated.h"

class USlateWidgetStyleAsset;

UCLASS()
class UMG_API USpinBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpinBoxValueCommittedEvent, float, InValue, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpinBoxValueChangedEvent, float, InValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpinBoxBeginSliderMovement);
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpinBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysUsesDeltaSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextOnCommit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpinBoxValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpinBoxValueCommittedEvent OnValueCommitted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpinBoxBeginSliderMovement OnBeginSliderMovement;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpinBoxValueChangedEvent OnEndSliderMovement;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinSliderValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxSliderValue: 1;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float MinSliderValue;
    
    UPROPERTY(EditAnywhere)
    float MaxSliderValue;
    
public:
    USpinBox();
    UFUNCTION(BlueprintCallable)
    void SetValue(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSliderValue(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinFractionalDigits(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSliderValue(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFractionalDigits(int32 newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForegroundColor(FSlateColor InForegroundColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDelta(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysUsesDeltaSnap(bool bNewValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinSliderValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinFractionalDigits() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSliderValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxFractionalDigits() const;
    
    UFUNCTION(BlueprintPure)
    float GetDelta() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAlwaysUsesDeltaSnap() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMinValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinSliderValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxSliderValue();
    
};

