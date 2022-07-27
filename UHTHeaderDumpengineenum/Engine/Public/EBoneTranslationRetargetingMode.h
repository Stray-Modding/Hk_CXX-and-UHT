#pragma once
#include "CoreMinimal.h"
#include "EBoneTranslationRetargetingMode.generated.h"

UENUM(BlueprintType)
namespace EBoneTranslationRetargetingMode {
    enum Type {
        Animation,
        Skeleton,
        AnimationScaled,
        AnimationRelative,
        OrientAndScale,
    };
}

