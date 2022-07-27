#pragma once
#include "CoreMinimal.h"
#include "EDecompressionType.generated.h"

UENUM(BlueprintType)
enum EDecompressionType {
    DTYPE_Setup,
    DTYPE_Invalid,
    DTYPE_Preview,
    DTYPE_Native,
    DTYPE_RealTime,
    DTYPE_Procedural,
    DTYPE_Xenon,
    DTYPE_Streaming,
    DTYPE_MAX UMETA(Hidden),
};

