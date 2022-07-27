#pragma once
#include "CoreMinimal.h"
#include "EInterpMoveAxis.generated.h"

UENUM(BlueprintType)
enum EInterpMoveAxis {
    AXIS_TranslationX,
    AXIS_TranslationY,
    AXIS_TranslationZ,
    AXIS_RotationX,
    AXIS_RotationY,
    AXIS_RotationZ,
    AXIS_MAX UMETA(Hidden),
};

