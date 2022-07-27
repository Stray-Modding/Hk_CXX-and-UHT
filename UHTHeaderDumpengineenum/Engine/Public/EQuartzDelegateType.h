#pragma once
#include "CoreMinimal.h"
#include "EQuartzDelegateType.generated.h"

UENUM(BlueprintType)
enum class EQuartzDelegateType : uint8 {
    MetronomeTick,
    CommandEvent,
    Count,
};

