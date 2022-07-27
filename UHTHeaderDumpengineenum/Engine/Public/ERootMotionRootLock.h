#pragma once
#include "CoreMinimal.h"
#include "ERootMotionRootLock.generated.h"

UENUM(BlueprintType)
namespace ERootMotionRootLock {
    enum Type {
        RefPose,
        AnimFirstFrame,
        Zero,
    };
}

