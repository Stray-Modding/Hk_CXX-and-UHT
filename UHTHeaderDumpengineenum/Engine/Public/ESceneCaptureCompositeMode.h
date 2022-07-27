#pragma once
#include "CoreMinimal.h"
#include "ESceneCaptureCompositeMode.generated.h"

UENUM(BlueprintType)
enum ESceneCaptureCompositeMode {
    SCCM_Overwrite,
    SCCM_Additive,
    SCCM_Composite,
    SCCM_MAX UMETA(Hidden),
};

