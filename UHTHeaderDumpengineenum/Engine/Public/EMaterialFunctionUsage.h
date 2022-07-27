#pragma once
#include "CoreMinimal.h"
#include "EMaterialFunctionUsage.generated.h"

UENUM(BlueprintType)
enum class EMaterialFunctionUsage : uint8 {
    Default,
    MaterialLayer,
    MaterialLayerBlend,
};

