#pragma once
#include "CoreMinimal.h"
#include "EFixedFoveationLevels.generated.h"

UENUM(BlueprintType)
namespace EFixedFoveationLevels {
    enum Type {
        Disabled,
        Low,
        Medium,
        High,
    };
}

