#pragma once
#include "CoreMinimal.h"
#include "EPriorityAttenuationMethod.generated.h"

UENUM(BlueprintType)
enum class EPriorityAttenuationMethod : uint8 {
    Linear,
    CustomCurve,
    Manual,
};

