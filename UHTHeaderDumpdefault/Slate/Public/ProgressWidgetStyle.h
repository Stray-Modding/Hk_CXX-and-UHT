#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "ProgressWidgetStyle.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle ProgressBarStyle;
    
    UProgressWidgetStyle();
};

