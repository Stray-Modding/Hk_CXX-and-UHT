#pragma once
#include "CoreMinimal.h"
#include "ECustomTimeStepSynchronizationState.generated.h"

UENUM(BlueprintType)
enum class ECustomTimeStepSynchronizationState : uint8 {
    Closed,
    Error,
    Synchronized,
    Synchronizing,
};

