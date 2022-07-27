#pragma once
#include "CoreMinimal.h"
#include "EMaterialPositionTransformSource.generated.h"

UENUM(BlueprintType)
enum EMaterialPositionTransformSource {
    TRANSFORMPOSSOURCE_Local,
    TRANSFORMPOSSOURCE_World,
    TRANSFORMPOSSOURCE_TranslatedWorld,
    TRANSFORMPOSSOURCE_View,
    TRANSFORMPOSSOURCE_Camera,
    TRANSFORMPOSSOURCE_Particle,
    TRANSFORMPOSSOURCE_MAX UMETA(Hidden),
};

