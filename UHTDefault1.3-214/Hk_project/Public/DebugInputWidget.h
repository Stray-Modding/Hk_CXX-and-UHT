#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKUserWidget.h"
#include "DebugInputWidget.generated.h"

class UUniformGridPanel;
class UScrollBox;
class UHKButton;
class UKeyIconWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API UDebugInputWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UUniformGridPanel* grid;
    
    UPROPERTY(Export)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UKeyIconWidget> m_keyIconWidgetClass;
    
public:
    UDebugInputWidget();
};

