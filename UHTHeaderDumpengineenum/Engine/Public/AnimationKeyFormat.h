#pragma once
#include "CoreMinimal.h"
#include "AnimationKeyFormat.generated.h"

UENUM(BlueprintType)
enum AnimationKeyFormat {
    AKF_ConstantKeyLerp,
    AKF_VariableKeyLerp,
    AKF_PerTrackCompression,
    AKF_MAX UMETA(Hidden),
};

