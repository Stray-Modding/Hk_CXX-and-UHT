#pragma once
#include "CoreMinimal.h"
#include "EVisibilityBasedAnimTickOption.generated.h"

UENUM(BlueprintType)
enum class EVisibilityBasedAnimTickOption : uint8 {
    AlwaysTickPoseAndRefreshBones,
    AlwaysTickPose,
    OnlyTickMontagesWhenNotRendered,
    OnlyTickPoseWhenRendered,
};

