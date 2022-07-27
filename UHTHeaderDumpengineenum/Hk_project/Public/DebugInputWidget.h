#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKUserWidget.h"
#include "DebugInputWidget.generated.h"

class UKeyIconWidget;
class UScrollBox;
class UUniformGridPanel;
class UHKButton;

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

