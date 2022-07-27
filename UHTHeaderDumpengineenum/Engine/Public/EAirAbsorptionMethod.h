#pragma once
#include "CoreMinimal.h"
#include "EAirAbsorptionMethod.generated.h"

UENUM(BlueprintType)
enum class EAirAbsorptionMethod : uint8 {
    Linear,
    CustomCurve,
};

