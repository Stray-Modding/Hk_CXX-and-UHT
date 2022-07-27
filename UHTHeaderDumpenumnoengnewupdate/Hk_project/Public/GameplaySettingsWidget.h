#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "GameplaySettingsWidget.generated.h"

class UCheckBoxWidget;
class UListBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGameplaySettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UListBoxWidget* LanguageListBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* VibrationCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* ReticuleCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* AutoPauseCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* HUDCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* JumpPromptCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* AutoCameraCheckBox;
    
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
    FText m_resetToDefaultsDialogText;
    
public:
    UGameplaySettingsWidget();
};

