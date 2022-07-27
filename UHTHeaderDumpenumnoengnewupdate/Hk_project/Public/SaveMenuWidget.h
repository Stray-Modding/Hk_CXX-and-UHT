#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveMenuWidget.generated.h"

class USaveSlotWidget;
class UHKButton;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API USaveMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USaveSlotWidget* SaveSlot1;
    
    UPROPERTY(Export)
    USaveSlotWidget* SaveSlot2;
    
    UPROPERTY(Export)
    USaveSlotWidget* SaveSlot3;
    
    UPROPERTY(Export)
    UHKButton* SelectButton;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onBackSound;
    
public:
    USaveMenuWidget();
};

