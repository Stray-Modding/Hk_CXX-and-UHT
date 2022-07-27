#pragma once
#include "CoreMinimal.h"
#include "ELocationEmitterSelectionMethod.generated.h"

UENUM(BlueprintType)
enum ELocationEmitterSelectionMethod {
    ELESM_Random,
    ELESM_Sequential,
    ELESM_MAX UMETA(Hidden),
};

