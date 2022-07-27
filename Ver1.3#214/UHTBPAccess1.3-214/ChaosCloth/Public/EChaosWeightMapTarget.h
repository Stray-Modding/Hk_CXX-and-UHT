#pragma once
#include "CoreMinimal.h"
#include "EChaosWeightMapTarget.generated.h"

UENUM(BlueprintType)
enum class EChaosWeightMapTarget : uint8 {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveStiffness,
    AnimDriveDamping,
    TetherStiffness,
};

