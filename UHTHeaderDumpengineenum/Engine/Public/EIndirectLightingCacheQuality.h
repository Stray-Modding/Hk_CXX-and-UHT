#pragma once
#include "CoreMinimal.h"
#include "EIndirectLightingCacheQuality.generated.h"

UENUM(BlueprintType)
enum EIndirectLightingCacheQuality {
    ILCQ_Off,
    ILCQ_Point,
    ILCQ_Volume,
    ILCQ_MAX UMETA(Hidden),
};

