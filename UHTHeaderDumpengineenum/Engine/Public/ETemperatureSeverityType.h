#pragma once
#include "CoreMinimal.h"
#include "ETemperatureSeverityType.generated.h"

UENUM(BlueprintType)
enum class ETemperatureSeverityType : uint8 {
    Unknown,
    Good,
    Bad,
    Serious,
    Critical,
    NumSeverities,
};

