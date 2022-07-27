#pragma once
#include "CoreMinimal.h"
#include "CylinderHeightAxis.generated.h"

UENUM(BlueprintType)
enum CylinderHeightAxis {
    PMLPC_HEIGHTAXIS_X,
    PMLPC_HEIGHTAXIS_Y,
    PMLPC_HEIGHTAXIS_Z,
    PMLPC_HEIGHTAXIS_MAX UMETA(Hidden),
};

