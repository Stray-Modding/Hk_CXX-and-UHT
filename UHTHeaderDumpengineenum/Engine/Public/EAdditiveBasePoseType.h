#pragma once
#include "CoreMinimal.h"
#include "EAdditiveBasePoseType.generated.h"

UENUM(BlueprintType)
enum EAdditiveBasePoseType {
    ABPT_None,
    ABPT_RefPose,
    ABPT_AnimScaled,
    ABPT_AnimFrame,
    ABPT_MAX UMETA(Hidden),
};

