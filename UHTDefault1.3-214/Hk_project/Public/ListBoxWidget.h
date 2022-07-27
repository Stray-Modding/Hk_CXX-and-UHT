#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ListBoxWidget.generated.h"

class UHKBorder;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UListBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKBorder* SelectionBorder;
    
    UPROPERTY(Export)
    UHKButton* LeftButton;
    
    UPROPERTY(Export)
    UHKButton* RightButton;
    
    UPROPERTY(Export)
    UHKTextBlock* Text;
    
    UPROPERTY(Export)
    UHKTextBlock* ListBoxText;
    
    UPROPERTY(Export)
    UHKBorder* Border;
    
    UPROPERTY(EditAnywhere)
    FText m_listBoxText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_selectedTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_selectedSelectionBorderColor;
    
public:
    UListBoxWidget();
};

