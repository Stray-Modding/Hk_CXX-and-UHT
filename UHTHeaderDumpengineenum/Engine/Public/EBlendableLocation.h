#pragma once
#include "CoreMinimal.h"
#include "EBlendableLocation.generated.h"

UENUM(BlueprintType)
enum EBlendableLocation {
    BL_AfterTonemapping,
    BL_BeforeTonemapping,
    BL_BeforeTranslucency,
    BL_ReplacingTonemapper,
    BL_SSRInput,
    BL_MAX UMETA(Hidden),
};

