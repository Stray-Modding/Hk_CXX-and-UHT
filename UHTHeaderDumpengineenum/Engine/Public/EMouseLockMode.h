#pragma once
#include "CoreMinimal.h"
#include "EMouseLockMode.generated.h"

UENUM(BlueprintType)
enum class EMouseLockMode : uint8 {
    DoNotLock,
    LockOnCapture,
    LockAlways,
    LockInFullscreen,
};

