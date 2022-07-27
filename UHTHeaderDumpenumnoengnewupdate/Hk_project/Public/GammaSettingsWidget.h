#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "GammaSettingsWidget.generated.h"

class UHorizontalBox;
class UMaterialInstanceDynamic;
class UHKProgressBar;
class UHKTextBlock;
class UHKButton;
class UImage;
class UWidgetAnimation;
class UTexture;
class UMaterialInterface;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGammaSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHKProgressBar* BrightnessProgressBar;
    
private:
    UPROPERTY(Export)
    UHKButton* ButtonLeft;
    
    UPROPERTY(Export)
    UHKButton* ButtonRight;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UHKButton* AcceptButton;
    
    UPROPERTY(Export)
    UHKButton* DefaultButton;
    
    UPROPERTY(Export)
    UHKTextBlock* ExplainText;
    
    UPROPERTY(Export)
    UImage* GammaIconLow;
    
    UPROPERTY(Export)
    UImage* GammaIconMiddle;
    
    UPROPERTY(Export)
    UImage* GammaIconHigh;
    
    UPROPERTY(Export)
    UHorizontalBox* KeyBox;
    
    UPROPERTY(Transient)
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconLowTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconMiddleTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconHighTexture;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_gammaIconMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconLowMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconMiddleMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconHighMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float m_minimumGammaValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_maximumGammaValue;
    
public:
    UGammaSettingsWidget();
};

