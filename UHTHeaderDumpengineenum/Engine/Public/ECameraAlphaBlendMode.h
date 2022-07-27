#pragma once
#include "CoreMinimal.h"
#include "ECameraAlphaBlendMode.generated.h"

UENUM(BlueprintType)
namespace ECameraAlphaBlendMode {
    enum Type {
        CABM_Linear,
        CABM_Cubic,
        CABM_MAX UMETA(Hidden),
    };
}

