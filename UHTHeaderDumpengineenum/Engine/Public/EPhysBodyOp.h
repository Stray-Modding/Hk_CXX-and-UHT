#pragma once
#include "CoreMinimal.h"
#include "EPhysBodyOp.generated.h"

UENUM(BlueprintType)
enum EPhysBodyOp {
    PBO_None,
    PBO_Term,
    PBO_MAX UMETA(Hidden),
};

