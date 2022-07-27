#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HKUserWidget.h"
#include "InputKeyRowWidget.generated.h"

class UInputSelectorWidget;
class UHKBorder;
class UHKTextBlock;
class UHKButton;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputKeyRowWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UInputSelectorWidget* FirstKeyButton;
    
    UPROPERTY(Export)
    UInputSelectorWidget* SecondKeyButton;
    
    UPROPERTY(Export)
    UHKBorder* Border;
    
    UPROPERTY(Export)
    UHKTextBlock* ActionKeyTextBlock;
    
    UPROPERTY(Export)
    UImage* SeperatorImage;
    
    UPROPERTY(Export)
    UHKButton* KeyRowButton;
    
    UPROPERTY(EditAnywhere)
    FText m_actionKeyText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningBorderBrushColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredBorderBrushColor;
    
public:
    UInputKeyRowWidget();
};

