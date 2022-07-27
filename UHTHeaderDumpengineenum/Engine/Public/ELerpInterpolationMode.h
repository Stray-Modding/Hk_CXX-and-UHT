#pragma once
#include "CoreMinimal.h"
#include "ELerpInterpolationMode.generated.h"

UENUM(BlueprintType)
namespace ELerpInterpolationMode {
    enum Type {
        QuatInterp,
        EulerInterp,
        DualQuatInterp,
    };
}

