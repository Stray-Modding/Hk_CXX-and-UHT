#pragma once
#include "CoreMinimal.h"
#include "CloudStatus.generated.h"

UENUM(BlueprintType)
enum class CloudStatus : uint8 {
    CloudStatus_NotDone,
    CloudStatus_Done,
};

