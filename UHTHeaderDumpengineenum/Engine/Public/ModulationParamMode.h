#pragma once
#include "CoreMinimal.h"
#include "ModulationParamMode.generated.h"

UENUM(BlueprintType)
enum ModulationParamMode {
    MPM_Normal,
    MPM_Abs,
    MPM_Direct,
    MPM_MAX UMETA(Hidden),
};

