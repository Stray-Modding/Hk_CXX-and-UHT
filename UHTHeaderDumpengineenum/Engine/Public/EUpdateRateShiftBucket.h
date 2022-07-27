#pragma once
#include "CoreMinimal.h"
#include "EUpdateRateShiftBucket.generated.h"

UENUM(BlueprintType)
enum class EUpdateRateShiftBucket : uint8 {
    ShiftBucket0,
    ShiftBucket1,
    ShiftBucket2,
    ShiftBucket3,
    ShiftBucket4,
    ShiftBucket5,
    ShiftBucketMax,
};

