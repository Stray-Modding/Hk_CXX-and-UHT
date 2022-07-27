#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapImageTargetOrientation.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapImageTargetOrientation : uint8 {
    ForwardAxisAsNormal,
    UpAxisAsNormal,
};

