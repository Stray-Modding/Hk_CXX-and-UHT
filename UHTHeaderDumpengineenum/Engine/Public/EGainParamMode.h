#pragma once
#include "CoreMinimal.h"
#include "EGainParamMode.generated.h"

UENUM(BlueprintType)
enum class EGainParamMode : uint8 {
    Linear,
    Decibels,
};

