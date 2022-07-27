#pragma once
#include "CoreMinimal.h"
#include "EVectorNoiseFunction.generated.h"

UENUM(BlueprintType)
enum EVectorNoiseFunction {
    VNF_CellnoiseALU,
    VNF_VectorALU,
    VNF_GradientALU,
    VNF_CurlALU,
    VNF_VoronoiALU,
    VNF_MAX UMETA(Hidden),
};

