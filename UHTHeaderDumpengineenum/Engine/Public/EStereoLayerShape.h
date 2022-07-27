#pragma once
#include "CoreMinimal.h"
#include "EStereoLayerShape.generated.h"

UENUM(BlueprintType)
enum EStereoLayerShape {
    SLSH_QuadLayer,
    SLSH_CylinderLayer,
    SLSH_CubemapLayer,
    SLSH_EquirectLayer,
    SLSH_MAX UMETA(Hidden),
};

