#pragma once
#include "CoreMinimal.h"
#include "ESkyAtmosphereTransformMode.generated.h"

UENUM(BlueprintType)
enum class ESkyAtmosphereTransformMode : uint8 {
    PlanetTopAtAbsoluteWorldOrigin,
    PlanetTopAtComponentTransform,
    PlanetCenterAtComponentTransform,
};

