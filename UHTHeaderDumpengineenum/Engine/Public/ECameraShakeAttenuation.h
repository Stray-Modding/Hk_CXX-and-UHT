#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeAttenuation.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeAttenuation : uint8 {
    Linear,
    Quadratic,
};

