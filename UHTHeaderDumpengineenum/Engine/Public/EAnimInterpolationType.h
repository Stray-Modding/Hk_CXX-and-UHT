#pragma once
#include "CoreMinimal.h"
#include "EAnimInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EAnimInterpolationType : uint8 {
    Linear,
    Step,
};

