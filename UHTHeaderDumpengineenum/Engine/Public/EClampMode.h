#pragma once
#include "CoreMinimal.h"
#include "EClampMode.generated.h"

UENUM(BlueprintType)
enum EClampMode {
    CMODE_Clamp,
    CMODE_ClampMin,
    CMODE_ClampMax,
    CMODE_MAX UMETA(Hidden),
};

