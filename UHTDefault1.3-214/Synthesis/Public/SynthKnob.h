#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnFloatValueChangedEventDelegate.h"
#include "SynthKnobStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnMouseCaptureBeginEventDelegate.h"
#include "OnMouseCaptureEndEventDelegate.h"
#include "OnControllerCaptureEndEventDelegate.h"
#include "OnControllerCaptureBeginEventDelegate.h"
#include "SynthKnob.generated.h"

UCLASS()
class SYNTHESIS_API USynthKnob : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseFineTuneSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ShowTooltipInfo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ParameterUnits;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSynthKnobStyle WidgetStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
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
    
    USynthKnob();
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
};

