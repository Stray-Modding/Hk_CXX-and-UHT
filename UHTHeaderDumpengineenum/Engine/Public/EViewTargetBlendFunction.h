#pragma once
#include "CoreMinimal.h"
#include "EViewTargetBlendFunction.generated.h"

UENUM(BlueprintType)
enum EViewTargetBlendFunction {
    VTBlend_Linear,
    VTBlend_Cubic,
    VTBlend_EaseIn,
    VTBlend_EaseOut,
    VTBlend_EaseInOut,
    VTBlend_PreBlended,
    VTBlend_MAX UMETA(Hidden),
};

