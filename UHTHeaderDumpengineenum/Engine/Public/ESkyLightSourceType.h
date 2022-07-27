#pragma once
#include "CoreMinimal.h"
#include "ESkyLightSourceType.generated.h"

UENUM(BlueprintType)
enum ESkyLightSourceType {
    SLS_CapturedScene,
    SLS_SpecifiedCubemap,
    SLS_MAX UMETA(Hidden),
};

