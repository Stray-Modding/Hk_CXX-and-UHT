#pragma once
#include "CoreMinimal.h"
#include "ETimecodeProviderSynchronizationState.generated.h"

UENUM()
enum class ETimecodeProviderSynchronizationState : int32 {
    Closed,
    Error,
    Synchronized,
    Synchronizing,
};

