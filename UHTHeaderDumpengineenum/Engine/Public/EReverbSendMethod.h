#pragma once
#include "CoreMinimal.h"
#include "EReverbSendMethod.generated.h"

UENUM(BlueprintType)
enum class EReverbSendMethod : uint8 {
    Linear,
    CustomCurve,
    Manual,
};

