#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapLightEstimationCamera.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapLightEstimationCamera : uint8 {
    Left,
    Right,
    FarLeft,
    FarRight,
};

