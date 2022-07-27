#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "TabButtonWidget.generated.h"

class UImage;
class UHKButton;
class UTextBlock;

UCLASS(EditInlineNew)
class HK_PROJECT_API UTabButtonWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UHKButton* Button;
    
    UPROPERTY(Export)
    UTextBlock* ButtonTextBlock;
    
    UPROPERTY(Export)
    UImage* ButtonImage;
    
    UPROPERTY(EditAnywhere)
    FText ButtonText;
    
public:
    UTabButtonWidget();
};

