#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HKUserWidget.h"
#include "SliderBoxWidget.generated.h"

class UHKBorder;
class UHKTextBlock;
class UHKButton;
class UHKSlider;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API USliderBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKBorder* Border;
    
    UPROPERTY(Export)
    UHKTextBlock* SliderText;
    
    UPROPERTY(Export)
    UHKButton* LeftButton;
    
    UPROPERTY(Export)
    UHKButton* RightButton;
    
    UPROPERTY(Export)
    UHKSlider* Slider;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_notchCount;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onSliderValueChangeSound;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_borderHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_textHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_sliderBarHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_sliderHandleHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
public:
    USliderBoxWidget();
};

