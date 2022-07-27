#pragma once
#include "CoreMinimal.h"
#include "ESoundSpatializationAlgorithm.generated.h"

UENUM(BlueprintType)
enum ESoundSpatializationAlgorithm {
    SPATIALIZATION_Default,
    SPATIALIZATION_HRTF,
    SPATIALIZATION_MAX UMETA(Hidden),
};

