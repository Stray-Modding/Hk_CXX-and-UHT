#pragma once
#include "CoreMinimal.h"
#include "ETypeAdvanceAnim.generated.h"

UENUM(BlueprintType)
enum ETypeAdvanceAnim {
    ETAA_Default,
    ETAA_Finished,
    ETAA_Looped,
    ETAA_MAX UMETA(Hidden),
};

