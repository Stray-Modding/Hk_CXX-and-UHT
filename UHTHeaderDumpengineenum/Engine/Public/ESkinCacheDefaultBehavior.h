#pragma once
#include "CoreMinimal.h"
#include "ESkinCacheDefaultBehavior.generated.h"

UENUM(BlueprintType)
enum class ESkinCacheDefaultBehavior : uint8 {
    Exclusive,
    Inclusive,
};

