#pragma once
#include "CoreMinimal.h"
#include "ETemperatureMethod.generated.h"

UENUM(BlueprintType)
enum ETemperatureMethod {
    TEMP_WhiteBalance,
    TEMP_ColorTemperature,
    TEMP_MAX UMETA(Hidden),
};

