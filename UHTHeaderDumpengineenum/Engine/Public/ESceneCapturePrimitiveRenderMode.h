#pragma once
#include "CoreMinimal.h"
#include "ESceneCapturePrimitiveRenderMode.generated.h"

UENUM(BlueprintType)
enum class ESceneCapturePrimitiveRenderMode : uint8 {
    PRM_LegacySceneCapture,
    PRM_RenderScenePrimitives,
    PRM_UseShowOnlyList,
    PRM_MAX UMETA(Hidden),
};

