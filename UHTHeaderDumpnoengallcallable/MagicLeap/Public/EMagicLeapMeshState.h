#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapMeshState.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapMeshState : uint8 {
    New,
    Updated,
    Deleted,
    Unchanged,
};

