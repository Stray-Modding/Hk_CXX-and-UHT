#pragma once
#include "CoreMinimal.h"
#include "EEasingFunction.h"
#include "JoyInterpolator.h"
#include "JoyEasingInterpolator.generated.h"

class UObject;
class UJoyEasingInterpolator;

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyEasingInterpolator : public UJoyInterpolator {
    GENERATED_BODY()
public:
    UJoyEasingInterpolator();
    UFUNCTION(BlueprintCallable)
    static UJoyEasingInterpolator* StartEasingInterpolator(UObject* WorldContextObject, TEnumAsByte<EEasingFunction> _easingFunction, float _time, UJoyEasingInterpolator*& _interpolatorObject);
    
};

