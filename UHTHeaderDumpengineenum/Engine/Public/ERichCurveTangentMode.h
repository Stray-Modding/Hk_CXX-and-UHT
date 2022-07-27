#pragma once
#include "CoreMinimal.h"
#include "ERichCurveTangentMode.generated.h"

UENUM(BlueprintType)
enum ERichCurveTangentMode {
    RCTM_Auto,
    RCTM_User,
    RCTM_Break,
    RCTM_None,
    RCTM_MAX UMETA(Hidden),
};

