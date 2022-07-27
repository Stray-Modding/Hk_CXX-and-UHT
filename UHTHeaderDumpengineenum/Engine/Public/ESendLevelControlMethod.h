#pragma once
#include "CoreMinimal.h"
#include "ESendLevelControlMethod.generated.h"

UENUM(BlueprintType)
enum class ESendLevelControlMethod : uint8 {
    Linear,
    CustomCurve,
    Manual,
};

