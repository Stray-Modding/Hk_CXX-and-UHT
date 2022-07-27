#pragma once
#include "CoreMinimal.h"
#include "EDetailMode.generated.h"

UENUM(BlueprintType)
enum EDetailMode {
    DM_Low,
    DM_Medium,
    DM_High,
    DM_MAX UMETA(Hidden),
};

