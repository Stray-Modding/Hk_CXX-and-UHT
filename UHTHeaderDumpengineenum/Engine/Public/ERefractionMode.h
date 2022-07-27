#pragma once
#include "CoreMinimal.h"
#include "ERefractionMode.generated.h"

UENUM(BlueprintType)
enum ERefractionMode {
    RM_IndexOfRefraction,
    RM_PixelNormalOffset,
    RM_MAX UMETA(Hidden),
};

