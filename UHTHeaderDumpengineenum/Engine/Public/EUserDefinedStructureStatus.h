#pragma once
#include "CoreMinimal.h"
#include "EUserDefinedStructureStatus.generated.h"

UENUM(BlueprintType)
enum EUserDefinedStructureStatus {
    UDSS_UpToDate,
    UDSS_Dirty,
    UDSS_Error,
    UDSS_Duplicate,
    UDSS_MAX UMETA(Hidden),
};

