#pragma once
#include "CoreMinimal.h"
#include "ERootMotionSourceStatusFlags.generated.h"

UENUM(BlueprintType)
enum class ERootMotionSourceStatusFlags : uint8 {
    Prepared = 0x1,
    Finished,
    MarkedForRemoval = 0x4,
};

