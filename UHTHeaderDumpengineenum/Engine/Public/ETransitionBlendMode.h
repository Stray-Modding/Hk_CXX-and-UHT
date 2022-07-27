#pragma once
#include "CoreMinimal.h"
#include "ETransitionBlendMode.generated.h"

UENUM(BlueprintType)
namespace ETransitionBlendMode {
    enum Type {
        TBM_Linear,
        TBM_Cubic,
        TBM_MAX UMETA(Hidden),
    };
}

