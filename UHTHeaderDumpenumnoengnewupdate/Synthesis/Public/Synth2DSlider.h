#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnFloatValueChangedEventSynth2DDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnControllerCaptureEndEventSynth2DDelegate.h"
#include "Synth2DSliderStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "OnMouseCaptureBeginEventSynth2DDelegate.h"
#include "OnMouseCaptureEndEventSynth2DDelegate.h"
#include "OnControllerCaptureBeginEventSynth2DDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Synth2DSlider.generated.h"

UCLASS()
class SYNTHESIS_API USynth2DSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ValueX;
    
    UPROPERTY(EditAnywhere)
    float ValueY;
    
    UPROPERTY()
    UWidget::FGetFloat ValueXDelegate;
    
    UPROPERTY()
    UWidget::FGetFloat ValueYDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSynth2DSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureBeginEventSynth2D OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureEndEventSynth2D OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureBeginEventSynth2D OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureEndEventSynth2D OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloatValueChangedEventSynth2D OnValueChangedX;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloatValueChangedEventSynth2D OnValueChangedY;
    
    USynth2DSlider();
    UFUNCTION(BlueprintCallable)
    void SetValue(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetValue() const;
    
};

