#pragma once
#include "CoreMinimal.h"
#include "ESubmixSendMethod.generated.h"

UENUM(BlueprintType)
enum class ESubmixSendMethod : uint8 {
    Linear,
    CustomCurve,
    Manual,
};

