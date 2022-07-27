#pragma once
#include "CoreMinimal.h"
#include "EAspectRatioAxisConstraint.generated.h"

UENUM(BlueprintType)
enum EAspectRatioAxisConstraint {
    AspectRatio_MaintainYFOV,
    AspectRatio_MaintainXFOV,
    AspectRatio_MajorAxisFOV,
    AspectRatio_MAX UMETA(Hidden),
};

