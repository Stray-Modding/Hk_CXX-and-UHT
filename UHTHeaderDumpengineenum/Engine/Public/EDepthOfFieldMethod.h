#pragma once
#include "CoreMinimal.h"
#include "EDepthOfFieldMethod.generated.h"

UENUM(BlueprintType)
enum EDepthOfFieldMethod {
    DOFM_BokehDOF,
    DOFM_Gaussian,
    DOFM_CircleDOF,
    DOFM_MAX UMETA(Hidden),
};

