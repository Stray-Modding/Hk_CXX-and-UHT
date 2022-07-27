#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendOption.generated.h"

UENUM(BlueprintType)
enum class EAlphaBlendOption : uint8 {
    Linear,
    Cubic,
    HermiteCubic,
    Sinusoidal,
    QuadraticInOut,
    CubicInOut,
    QuarticInOut,
    QuinticInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    ExpIn,
    ExpOut,
    ExpInOut,
    Custom,
};

