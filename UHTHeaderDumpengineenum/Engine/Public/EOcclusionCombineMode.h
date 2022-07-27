#pragma once
#include "CoreMinimal.h"
#include "EOcclusionCombineMode.generated.h"

UENUM(BlueprintType)
enum EOcclusionCombineMode {
    OCM_Minimum,
    OCM_Multiply,
    OCM_MAX UMETA(Hidden),
};

