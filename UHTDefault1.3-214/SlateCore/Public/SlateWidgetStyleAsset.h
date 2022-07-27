#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateWidgetStyleAsset.generated.h"

class USlateWidgetStyleContainerBase;

UCLASS()
class SLATECORE_API USlateWidgetStyleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USlateWidgetStyleContainerBase* CustomStyle;
    
    USlateWidgetStyleAsset();
};

