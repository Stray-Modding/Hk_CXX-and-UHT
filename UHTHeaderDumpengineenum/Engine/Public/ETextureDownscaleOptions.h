#pragma once
#include "CoreMinimal.h"
#include "ETextureDownscaleOptions.generated.h"

UENUM(BlueprintType)
enum class ETextureDownscaleOptions : uint8 {
    Default,
    Unfiltered,
    SimpleAverage,
    Sharpen0,
    Sharpen1,
    Sharpen2,
    Sharpen3,
    Sharpen4,
    Sharpen5,
    Sharpen6,
    Sharpen7,
    Sharpen8,
    Sharpen9,
    Sharpen10,
};

