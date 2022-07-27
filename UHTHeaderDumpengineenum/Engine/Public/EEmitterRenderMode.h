#pragma once
#include "CoreMinimal.h"
#include "EEmitterRenderMode.generated.h"

UENUM(BlueprintType)
enum EEmitterRenderMode {
    ERM_Normal,
    ERM_Point,
    ERM_Cross,
    ERM_LightsOnly,
    ERM_None,
    ERM_MAX UMETA(Hidden),
};

