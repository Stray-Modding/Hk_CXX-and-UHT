#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
#include "OnMouseCaptureBeginEventDelegate2.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SliderStyle -FallbackName=SliderStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "OnMouseCaptureEndEventDelegate2.h"
#include "OnControllerCaptureBeginEventDelegate2.h"
#include "OnControllerCaptureEndEventDelegate2.h"
#include "OnFloatValueChangedEventDelegate2.h"
#include "Slider.generated.h"

UCLASS()
class UMG_API USlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool MouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RequiresControllerLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureBeginEvent OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureEndEvent OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureBeginEvent OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureEndEvent OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloatValueChangedEvent OnValueChanged;
    
    USlider();
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedValue() const;
    
};

