#pragma once
#include "CoreMinimal.h"
#include "ESourceBusSendLevelControlMethod.generated.h"

UENUM(BlueprintType)
enum class ESourceBusSendLevelControlMethod : uint8 {
    Linear,
    CustomCurve,
    Manual,
};

