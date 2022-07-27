#pragma once
#include "CoreMinimal.h"
#include "ELightUnits.generated.h"

UENUM(BlueprintType)
enum class ELightUnits : uint8 {
    Unitless,
    Candelas,
    Lumens,
};

