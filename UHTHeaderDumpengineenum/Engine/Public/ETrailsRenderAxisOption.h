#pragma once
#include "CoreMinimal.h"
#include "ETrailsRenderAxisOption.generated.h"

UENUM(BlueprintType)
enum ETrailsRenderAxisOption {
    Trails_CameraUp,
    Trails_SourceUp,
    Trails_WorldUp,
    Trails_MAX UMETA(Hidden),
};

