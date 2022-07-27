#pragma once
#include "CoreMinimal.h"
#include "ERoundingMode.generated.h"

UENUM(BlueprintType)
enum ERoundingMode {
    HalfToEven,
    HalfFromZero,
    HalfToZero,
    FromZero,
    ToZero,
    ToNegativeInfinity,
    ToPositiveInfinity,
};

