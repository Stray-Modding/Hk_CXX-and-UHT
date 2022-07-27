#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ChapterMenuWidget.generated.h"

class UScrollBox;
class UHKButton;
class UChapterEntryWidget;
class UTexture2D;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UChapterMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UScrollBox* ChapterScrollBox;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry1;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry2;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry3;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry4;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry5;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry6;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry7;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry8;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry9;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry10;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry11;
    
    UPROPERTY(Export)
    UChapterEntryWidget* ChapterEntry12;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton1;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton2;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton3;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton4;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton5;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton6;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton7;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton8;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton9;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton10;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton11;
    
    UPROPERTY(Export)
    UHKButton* ChapterSelectionButton12;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionLocked;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionUnLocked;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* ChapterSelectionSelected;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage1;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage2;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage3;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage4;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage5;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage6;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage7;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage8;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage9;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage10;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage11;
    
    UPROPERTY(Export)
    UImage* ChapterSelectionImage12;
    
    UPROPERTY(Export)
    UHKButton* SelectButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
public:
    UChapterMenuWidget();
};

