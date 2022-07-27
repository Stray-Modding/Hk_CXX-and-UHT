#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "GraphicsSettingsWidget.generated.h"

class USliderBoxWidget;
class UScrollBox;
class UTextBlock;
class UListBoxWidget;
class UHorizontalBox;
class UHKTextBlock;
class UCheckBoxWidget;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGraphicsSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Export)
    USliderBoxWidget* MotionBlurSliderBox;
    
    UPROPERTY(Export)
    USliderBoxWidget* SharpnessSliderBox;
    
    UPROPERTY(Export)
    UListBoxWidget* ResolutionListBox;
    
    UPROPERTY(Export)
    UListBoxWidget* FrameRateListBox;
    
    UPROPERTY(Export)
    UHorizontalBox* GraphicsMemoryBox;
    
    UPROPERTY(Export)
    UTextBlock* GraphicsMemoryText;
    
    UPROPERTY(Export)
    UListBoxWidget* ScreenPercentageListBox;
    
    UPROPERTY(Export)
    UListBoxWidget* EffectsQualityListBox;
    
    UPROPERTY(Export)
    UListBoxWidget* ShadowQualityListBox;
    
    UPROPERTY(Export)
    UListBoxWidget* TextureQualityListBox;
    
    UPROPERTY(Export)
    UListBoxWidget* MeshQualityListBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* FullscreenCheckBox;
    
    UPROPERTY(Export)
    UCheckBoxWidget* VSyncCheckBox;
    
    UPROPERTY(Export)
    UHKButton* GammaButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UHKButton* DefaultsButton;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryGigabytesText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryUnavailableText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_frameRateUncappedText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityLowText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityMediumText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityHighText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityVeryHighText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityFullText;
    
    UPROPERTY(Export)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(Export)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Export)
    UHKButton* TabRightButton;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FIntPoint> m_resolutions;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<uint32> m_screenPercentages;
    
public:
    UGraphicsSettingsWidget();
};

