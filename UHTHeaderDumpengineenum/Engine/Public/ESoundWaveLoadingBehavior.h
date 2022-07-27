#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveLoadingBehavior.generated.h"

UENUM(BlueprintType)
enum class ESoundWaveLoadingBehavior : uint8 {
    Inherited,
    RetainOnLoad,
    PrimeOnLoad,
    LoadOnDemand,
    ForceInline,
    Uninitialized = 0xFF,
};

