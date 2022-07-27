#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HKUserWidget.h"
#include "MainMenuWidget.generated.h"

class UHKButton;
class UTextBlock;
class UTexture2D;
class UWorld;

UCLASS(EditInlineNew)
class HK_PROJECT_API UMainMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKButton* StartButton;
    
    UPROPERTY(Export)
    UHKButton* OptionsButton;
    
    UPROPERTY(Export)
    UHKButton* CreditsButton;
    
    UPROPERTY(Export)
    UHKButton* QuitButton;
    
    UPROPERTY(Export)
    UHKButton* SelectButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UTextBlock* VersionText;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, UTexture2D*> ChapterImages;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UWorld> m_creditsLevel;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_quitDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_fadeBeginColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_fadeEndColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fadeDuration;
    
    UPROPERTY(EditAnywhere)
    float m_creditsFadeDuration;
    
public:
    UMainMenuWidget();
};

