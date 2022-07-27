#pragma once
#include "CoreMinimal.h"
#include "EInertializationSpace.generated.h"

UENUM(BlueprintType)
enum class EInertializationSpace : uint8 {
    Default,
    WorldSpace,
    WorldRotation,
};

