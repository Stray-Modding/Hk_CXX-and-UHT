#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "RichTextBlockKeyIconDecorator.generated.h"

class UBindingIconWidget;

UCLASS(Abstract)
class HK_PROJECT_API URichTextBlockKeyIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBindingIconWidget> m_widgetClass;
    
    UPROPERTY(Export)
    UBindingIconWidget* m_widget;
    
public:
    URichTextBlockKeyIconDecorator();
};

