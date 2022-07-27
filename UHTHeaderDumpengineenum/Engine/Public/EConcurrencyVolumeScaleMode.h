#pragma once
#include "CoreMinimal.h"
#include "EConcurrencyVolumeScaleMode.generated.h"

UENUM(BlueprintType)
enum class EConcurrencyVolumeScaleMode : uint8 {
    Default,
    Distance,
    Priority,
};

