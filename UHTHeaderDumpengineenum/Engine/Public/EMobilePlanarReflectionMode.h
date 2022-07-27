#pragma once
#include "CoreMinimal.h"
#include "EMobilePlanarReflectionMode.generated.h"

UENUM(BlueprintType)
namespace EMobilePlanarReflectionMode {
    enum Type {
        Usual,
        MobilePPRExclusive,
        MobilePPR,
    };
}

