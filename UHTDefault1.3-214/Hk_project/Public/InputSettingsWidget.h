#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputSettingsWidget.generated.h"

class UCheckBoxWidget;
class USliderBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCheckBoxWidget* InvertLookXCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* InvertLookYCheckBox;
    
    UPROPERTY(Export)
    USliderBoxWidget* LookSensitivitySliderBox;
    
    UPROPERTY(Export)
    UHKButton* RebindButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Export)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(Export)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Export)
    UHKButton* TabRightButton;
    
    UPROPERTY(EditDefaultsOnly)
    float m_minLookSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_maxLookSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
public:
    UInputSettingsWidget();
};

