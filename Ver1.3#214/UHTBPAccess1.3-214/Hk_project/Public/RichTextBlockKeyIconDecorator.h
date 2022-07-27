#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "RichTextBlockKeyIconDecorator.generated.h"

class UBindingIconWidget;

UCLASS(Abstract, Blueprintable)
class HK_PROJECT_API URichTextBlockKeyIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBindingIconWidget> m_widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBindingIconWidget* m_widget;
    
public:
    URichTextBlockKeyIconDecorator();
};

