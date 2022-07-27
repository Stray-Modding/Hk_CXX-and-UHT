#pragma once
#include "CoreMinimal.h"
#include "EWorldPositionIncludedOffsets.generated.h"

UENUM(BlueprintType)
enum EWorldPositionIncludedOffsets {
    WPT_Default,
    WPT_ExcludeAllShaderOffsets,
    WPT_CameraRelative,
    WPT_CameraRelativeNoOffsets,
    WPT_MAX UMETA(Hidden),
};

