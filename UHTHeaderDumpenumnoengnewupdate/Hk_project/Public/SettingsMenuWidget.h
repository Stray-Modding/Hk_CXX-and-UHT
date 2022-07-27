#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SettingsMenuWidget.generated.h"

class UInputSettingsWidget;
class UGraphicsSettingsWidget;
class UTabButtonWidget;
class UAudioSettingsWidget;
class UGameplaySettingsWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API USettingsMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTabButtonWidget* AudioButton;
    
    UPROPERTY(Export)
    UTabButtonWidget* GraphicsButton;
    
    UPROPERTY(Export)
    UTabButtonWidget* InputButton;
    
    UPROPERTY(Export)
    UTabButtonWidget* GameplayButton;
    
    UPROPERTY(Export)
    UAudioSettingsWidget* AudioSettings;
    
    UPROPERTY(Export)
    UGraphicsSettingsWidget* GraphicsSettings;
    
    UPROPERTY(Export)
    UInputSettingsWidget* InputSettings;
    
    UPROPERTY(Export)
    UGameplaySettingsWidget* GameplaySettings;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_applySettingsDialogText;
    
public:
    USettingsMenuWidget();
};

