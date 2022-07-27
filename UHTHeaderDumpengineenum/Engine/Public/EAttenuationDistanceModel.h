#pragma once
#include "CoreMinimal.h"
#include "EAttenuationDistanceModel.generated.h"

UENUM(BlueprintType)
enum class EAttenuationDistanceModel : uint8 {
    Linear,
    Logarithmic,
    Inverse,
    LogReverse,
    NaturalSound,
    Custom,
};

