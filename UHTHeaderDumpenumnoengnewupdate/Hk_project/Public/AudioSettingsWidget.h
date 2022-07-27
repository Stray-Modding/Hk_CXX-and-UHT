#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "AudioSettingsWidget.generated.h"

class USliderBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UAudioSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USliderBoxWidget* MasterVolumeSliderBox;
    
    UPROPERTY(Export)
    USliderBoxWidget* MusicVolumeSliderBox;
    
    UPROPERTY(Export)
    USliderBoxWidget* EffectsVolumeSliderBox;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Export)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Export)
    UHKButton* TabRightButton;
    
    UPROPERTY(Export)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
public:
    UAudioSettingsWidget();
};

