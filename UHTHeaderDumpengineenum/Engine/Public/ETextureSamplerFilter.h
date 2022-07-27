#pragma once
#include "CoreMinimal.h"
#include "ETextureSamplerFilter.generated.h"

UENUM(BlueprintType)
enum class ETextureSamplerFilter : uint8 {
    Point,
    Bilinear,
    Trilinear,
    AnisotropicPoint,
    AnisotropicLinear,
};

