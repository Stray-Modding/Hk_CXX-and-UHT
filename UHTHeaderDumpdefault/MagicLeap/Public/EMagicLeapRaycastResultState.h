#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapRaycastResultState.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapRaycastResultState : uint8 {
    RequestFailed,
    NoCollision,
    HitUnobserved,
    HitObserved,
};

