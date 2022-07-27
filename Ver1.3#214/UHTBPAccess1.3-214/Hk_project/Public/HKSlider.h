#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Slider -FallbackName=Slider
#include "HKSlider.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSlider : public USlider {
    GENERATED_BODY()
public:
    UHKSlider();
private:
    UFUNCTION(BlueprintCallable)
    void _OnValueChanged(float _value);
    
};

