#pragma once
#include "CoreMinimal.h"
#include "EQuarztQuantizationReference.generated.h"

UENUM(BlueprintType)
enum class EQuarztQuantizationReference : uint8 {
    BarRelative,
    TransportRelative,
    CurrentTimeRelative,
    Count,
};

