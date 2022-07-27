#pragma once
#include "CoreMinimal.h"
#include "EModulationRouting.generated.h"

UENUM(BlueprintType)
enum class EModulationRouting : uint8 {
    Disable,
    Inherit,
    Override,
};

