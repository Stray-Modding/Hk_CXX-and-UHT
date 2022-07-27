#pragma once
#include "CoreMinimal.h"
#include "EActivityStatus.generated.h"

UENUM()
enum class EActivityStatus : uint8 {
    Hidden,
    Revealed,
    InProgress,
    Failed,
    Completed,
};

