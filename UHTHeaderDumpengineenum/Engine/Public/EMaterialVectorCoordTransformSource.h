#pragma once
#include "CoreMinimal.h"
#include "EMaterialVectorCoordTransformSource.generated.h"

UENUM(BlueprintType)
enum EMaterialVectorCoordTransformSource {
    TRANSFORMSOURCE_Tangent,
    TRANSFORMSOURCE_Local,
    TRANSFORMSOURCE_World,
    TRANSFORMSOURCE_View,
    TRANSFORMSOURCE_Camera,
    TRANSFORMSOURCE_ParticleWorld,
    TRANSFORMSOURCE_MAX UMETA(Hidden),
};

