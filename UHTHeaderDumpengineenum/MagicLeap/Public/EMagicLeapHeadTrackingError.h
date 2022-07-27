#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingError.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHeadTrackingError : uint8 {
    None,
    NotEnoughFeatures,
    LowLight,
    Unknown,
};

