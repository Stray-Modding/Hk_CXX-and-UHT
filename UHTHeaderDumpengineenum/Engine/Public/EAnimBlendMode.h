#pragma once
#include "CoreMinimal.h"
#include "EAnimBlendMode.generated.h"

UENUM(BlueprintType)
enum class EAnimBlendMode : uint8 {
    Blend,
    FullSource,
    FullTarget,
};

