#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ChapterEntryWidget.generated.h"

class UImage;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UChapterEntryWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKButton* MainButton;
    
    UPROPERTY(Export)
    UHKTextBlock* ChapterText;
    
    UPROPERTY(Export)
    UHKTextBlock* MemoryText;
    
    UPROPERTY(Export)
    UImage* LockedImage;
    
    UPROPERTY(Export)
    UImage* ChapterImage;
    
    UPROPERTY(Export)
    UImage* ChapterSelectedImage;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_restartDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_unexploredChapterText;
    
public:
    UChapterEntryWidget();
};

