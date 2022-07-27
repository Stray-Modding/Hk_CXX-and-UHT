#pragma once
#include "CoreMinimal.h"
#include "EUIScalingRule.generated.h"

UENUM(BlueprintType)
enum class EUIScalingRule : uint8 {
    ShortestSide,
    LongestSide,
    Horizontal,
    Vertical,
    ScaleToFit,
    Custom,
};

