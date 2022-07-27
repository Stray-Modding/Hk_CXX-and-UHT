#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapControllerType : uint8 {
    None,
    Device,
    MobileApp,
};

