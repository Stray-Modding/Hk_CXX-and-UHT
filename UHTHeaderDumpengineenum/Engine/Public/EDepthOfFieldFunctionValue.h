#pragma once
#include "CoreMinimal.h"
#include "EDepthOfFieldFunctionValue.generated.h"

UENUM(BlueprintType)
enum EDepthOfFieldFunctionValue {
    TDOF_NearAndFarMask,
    TDOF_NearMask,
    TDOF_FarMask,
    TDOF_CircleOfConfusionRadius,
    TDOF_MAX UMETA(Hidden),
};

