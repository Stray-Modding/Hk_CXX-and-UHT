#pragma once
#include "CoreMinimal.h"
#include "ERichCurveTangentWeightMode.generated.h"

UENUM(BlueprintType)
enum ERichCurveTangentWeightMode {
    RCTWM_WeightedNone,
    RCTWM_WeightedArrive,
    RCTWM_WeightedLeave,
    RCTWM_WeightedBoth,
    RCTWM_MAX UMETA(Hidden),
};

