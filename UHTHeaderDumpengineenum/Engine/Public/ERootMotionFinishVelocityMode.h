#pragma once
#include "CoreMinimal.h"
#include "ERootMotionFinishVelocityMode.generated.h"

UENUM(BlueprintType)
enum class ERootMotionFinishVelocityMode : uint8 {
    MaintainLastRootMotionVelocity,
    SetVelocity,
    ClampVelocity,
};

