#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPlaneQueryType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapPlaneQueryType : uint8 {
    Bulk,
    Delta,
};

