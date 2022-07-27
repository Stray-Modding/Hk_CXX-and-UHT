#pragma once
#include "CoreMinimal.h"
#include "EEasingFunc.generated.h"

UENUM(BlueprintType)
namespace EEasingFunc {
    enum Type {
        Linear,
        Step,
        SinusoidalIn,
        SinusoidalOut,
        SinusoidalInOut,
        EaseIn,
        EaseOut,
        EaseInOut,
        ExpoIn,
        ExpoOut,
        ExpoInOut,
        CircularIn,
        CircularOut,
        CircularInOut,
    };
}

