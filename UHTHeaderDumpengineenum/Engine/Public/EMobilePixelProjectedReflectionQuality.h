#pragma once
#include "CoreMinimal.h"
#include "EMobilePixelProjectedReflectionQuality.generated.h"

UENUM(BlueprintType)
namespace EMobilePixelProjectedReflectionQuality {
    enum Type {
        Disabled,
        BestPerformance,
        BetterQuality,
        BestQuality,
    };
}

