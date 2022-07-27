#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextBoxStyle -FallbackName=EditableTextBoxStyle
#include "EditableTextBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UEditableTextBoxWidgetStyle();
};

