#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SpinBoxStyle -FallbackName=SpinBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "SpinBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSpinBoxStyle SpinBoxStyle;
    
    USpinBoxWidgetStyle();
};

