#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "DialogBoxWidget.generated.h"

class UTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UDialogBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTextBlock* TitleText;
    
    UPROPERTY(Export)
    UTextBlock* OkButtonText;
    
    UPROPERTY(Export)
    UTextBlock* CancelButtonText;
    
    UPROPERTY(Export)
    UHKButton* OkButton;
    
    UPROPERTY(Export)
    UHKButton* CancelButton;
    
    UPROPERTY(Export)
    UHKButton* SelectButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
public:
    UDialogBoxWidget();
};

