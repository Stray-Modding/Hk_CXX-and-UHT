#pragma once
#include "CoreMinimal.h"
#include "EAnimationMode.generated.h"

UENUM(BlueprintType)
namespace EAnimationMode {
    enum Type {
        AnimationBlueprint,
        AnimationSingleNode,
        AnimationCustomMode,
    };
}

