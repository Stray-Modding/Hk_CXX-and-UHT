#pragma once
#include "CoreMinimal.h"
#include "EBlueprintStatus.generated.h"

UENUM(BlueprintType)
enum EBlueprintStatus {
    BS_Unknown,
    BS_Dirty,
    BS_Error,
    BS_UpToDate,
    BS_BeingCreated,
    BS_UpToDateWithWarnings,
    BS_MAX UMETA(Hidden),
};

