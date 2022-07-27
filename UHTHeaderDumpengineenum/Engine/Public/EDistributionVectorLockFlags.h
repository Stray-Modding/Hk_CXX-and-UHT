#pragma once
#include "CoreMinimal.h"
#include "EDistributionVectorLockFlags.generated.h"

UENUM(BlueprintType)
enum EDistributionVectorLockFlags {
    EDVLF_None,
    EDVLF_XY,
    EDVLF_XZ,
    EDVLF_YZ,
    EDVLF_XYZ,
    EDVLF_MAX UMETA(Hidden),
};

