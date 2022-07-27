#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPlaneQueryFlags.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapPlaneQueryFlags : uint8 {
    Vertical,
    Horizontal,
    Arbitrary,
    OrientToGravity,
    PreferInner,
    Ceiling,
    Floor,
    Wall,
    Polygons,
};

