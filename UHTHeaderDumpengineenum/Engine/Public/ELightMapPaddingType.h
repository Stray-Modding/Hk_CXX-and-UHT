#pragma once
#include "CoreMinimal.h"
#include "ELightMapPaddingType.generated.h"

UENUM(BlueprintType)
enum ELightMapPaddingType {
    LMPT_NormalPadding,
    LMPT_PrePadding,
    LMPT_NoPadding,
    LMPT_MAX UMETA(Hidden),
};

