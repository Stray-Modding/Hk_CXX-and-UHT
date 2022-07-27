#pragma once
#include "CoreMinimal.h"
#include "EReflectionSourceType.generated.h"

UENUM(BlueprintType)
enum class EReflectionSourceType : uint8 {
    CapturedScene,
    SpecifiedCubemap,
};

