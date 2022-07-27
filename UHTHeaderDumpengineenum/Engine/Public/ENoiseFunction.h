#pragma once
#include "CoreMinimal.h"
#include "ENoiseFunction.generated.h"

UENUM(BlueprintType)
enum ENoiseFunction {
    NOISEFUNCTION_SimplexTex,
    NOISEFUNCTION_GradientTex,
    NOISEFUNCTION_GradientTex3D,
    NOISEFUNCTION_GradientALU,
    NOISEFUNCTION_ValueALU,
    NOISEFUNCTION_VoronoiALU,
    NOISEFUNCTION_MAX UMETA(Hidden),
};

