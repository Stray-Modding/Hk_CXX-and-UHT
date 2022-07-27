#pragma once
#include "CoreMinimal.h"
#include "EBeamTaperMethod.generated.h"

UENUM(BlueprintType)
enum EBeamTaperMethod {
    PEBTM_None,
    PEBTM_Full,
    PEBTM_Partial,
    PEBTM_MAX UMETA(Hidden),
};

