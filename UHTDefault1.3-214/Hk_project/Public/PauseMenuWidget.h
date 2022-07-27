#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "PauseMenuWidget.generated.h"

class UHKButton;
class UTextBlock;

UCLASS(EditInlineNew)
class HK_PROJECT_API UPauseMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKButton* ResumeButton;
    
    UPROPERTY(Export)
    UHKButton* OptionsButton;
    
    UPROPERTY(Export)
    UHKButton* ReloadCheckpointButton;
    
    UPROPERTY(Export)
    UHKButton* QuitButton;
    
    UPROPERTY(Export)
    UHKButton* SelectButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UTextBlock* VersionText;
    
    UPROPERTY(Export)
    UTextBlock* LastCheckPointTime;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_lastCheckPointTimeText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointDurationText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_reloadCheckpointTimeText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_noCheckpointDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_backButtonDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_quitDialogText;
    
public:
    UPauseMenuWidget();
};

