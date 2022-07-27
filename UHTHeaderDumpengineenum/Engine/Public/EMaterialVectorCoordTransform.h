#pragma once
#include "CoreMinimal.h"
#include "EMaterialVectorCoordTransform.generated.h"

UENUM(BlueprintType)
enum EMaterialVectorCoordTransform {
    TRANSFORM_Tangent,
    TRANSFORM_Local,
    TRANSFORM_World,
    TRANSFORM_View,
    TRANSFORM_Camera,
    TRANSFORM_ParticleWorld,
    TRANSFORM_MAX UMETA(Hidden),
};

