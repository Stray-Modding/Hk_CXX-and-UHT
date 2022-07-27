#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "HKProgressBar.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UHKProgressBar();
private:
    UFUNCTION(BlueprintCallable)
    void _OnValueChanged(float _value);
    
};

