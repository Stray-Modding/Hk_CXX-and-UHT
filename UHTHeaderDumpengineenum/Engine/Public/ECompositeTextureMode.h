#pragma once
#include "CoreMinimal.h"
#include "ECompositeTextureMode.generated.h"

UENUM(BlueprintType)
enum ECompositeTextureMode {
    CTM_Disabled,
    CTM_NormalRoughnessToRed,
    CTM_NormalRoughnessToGreen,
    CTM_NormalRoughnessToBlue,
    CTM_NormalRoughnessToAlpha,
    CTM_MAX UMETA(Hidden),
};

