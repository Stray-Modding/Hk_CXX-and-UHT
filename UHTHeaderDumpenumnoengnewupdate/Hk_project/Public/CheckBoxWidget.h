#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CheckBoxWidget.generated.h"

class UHKBorder;
class UHKCheckBox;
class UTextBlock;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API UCheckBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKBorder* Border;
    
    UPROPERTY(Export)
    UHKCheckBox* CheckBox;
    
    UPROPERTY(Export)
    UTextBlock* CheckBoxText;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onSelectedSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onCheckedSound;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredBorderBrushColor;
    
public:
    UCheckBoxWidget();
};

