#pragma once
#include "CoreMinimal.h"
#include "ETravelType.generated.h"

UENUM(BlueprintType)
enum ETravelType {
    TRAVEL_Absolute,
    TRAVEL_Partial,
    TRAVEL_Relative,
    TRAVEL_MAX UMETA(Hidden),
};

