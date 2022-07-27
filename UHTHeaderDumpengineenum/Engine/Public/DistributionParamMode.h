#pragma once
#include "CoreMinimal.h"
#include "DistributionParamMode.generated.h"

UENUM(BlueprintType)
enum DistributionParamMode {
    DPM_Normal,
    DPM_Abs,
    DPM_Direct,
    DPM_MAX UMETA(Hidden),
};

