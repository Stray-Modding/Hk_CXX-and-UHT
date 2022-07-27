#pragma once
#include "CoreMinimal.h"
#include "ELuminARLineTraceChannel.generated.h"

UENUM(BlueprintType)
enum class ELuminARLineTraceChannel : uint8 {
    None,
    FeaturePoint,
    InfinitePlane,
    PlaneUsingExtent = 0x4,
    PlaneUsingBoundaryPolygon = 0x8,
    FeaturePointWithSurfaceNormal = 0x10,
};

