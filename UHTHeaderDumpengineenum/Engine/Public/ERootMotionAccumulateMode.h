#pragma once
#include "CoreMinimal.h"
#include "ERootMotionAccumulateMode.generated.h"

UENUM(BlueprintType)
enum class ERootMotionAccumulateMode : uint8 {
    Override,
    Additive,
};

