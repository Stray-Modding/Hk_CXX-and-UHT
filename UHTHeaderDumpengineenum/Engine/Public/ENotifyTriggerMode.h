#pragma once
#include "CoreMinimal.h"
#include "ENotifyTriggerMode.generated.h"

UENUM(BlueprintType)
namespace ENotifyTriggerMode {
    enum Type {
        AllAnimations,
        HighestWeightedAnimation,
        None,
    };
}

