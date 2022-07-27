#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveSlotWidget.generated.h"

class UImage;
class UHKSaveGame;
class UHKTextBlock;
class UHKButton;
class UVerticalBox;
class UTexture2D;

UCLASS(EditInlineNew)
class HK_PROJECT_API USaveSlotWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UImage* ChapterImageBackground;
    
    UPROPERTY(Export)
    UImage* ChapterImageSelectionBackground;
    
    UPROPERTY(Export)
    UHKButton* MainButton;
    
    UPROPERTY(Export)
    UHKTextBlock* ImageText;
    
    UPROPERTY(Export)
    UHKTextBlock* TitleText;
    
    UPROPERTY(Export)
    UHKTextBlock* ChapterText;
    
    UPROPERTY(Export)
    UHKTextBlock* DurationText;
    
    UPROPERTY(Export)
    UHKTextBlock* MemoryText;
    
    UPROPERTY(Export)
    UHKTextBlock* StartButtonText;
    
    UPROPERTY(Export)
    UVerticalBox* MenuBox;
    
    UPROPERTY(Export)
    UHKButton* StartButton;
    
    UPROPERTY(Export)
    UHKButton* ChapterButton;
    
    UPROPERTY(Export)
    UHKButton* ClearButton;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_emptySaveSlotImage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_unSelectedOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_slotTitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_clearSlotDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_startGameText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_newGameText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_continueText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_durationText;
    
    UPROPERTY()
    UHKSaveGame* m_slotInfo;
    
public:
    USaveSlotWidget();
};

