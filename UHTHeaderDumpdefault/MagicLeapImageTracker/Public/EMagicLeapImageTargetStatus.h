#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapImageTargetStatus.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapImageTargetStatus : uint8 {
    Tracked,
    Unreliable,
    NotTracked,
};

