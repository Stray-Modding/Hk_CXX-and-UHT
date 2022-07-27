#pragma once
#include "CoreMinimal.h"
#include "ERichCurveKeyTimeCompressionFormat.generated.h"

UENUM(BlueprintType)
enum ERichCurveKeyTimeCompressionFormat {
    RCKTCF_uint16,
    RCKTCF_float32,
    RCKTCF_MAX UMETA(Hidden),
};

