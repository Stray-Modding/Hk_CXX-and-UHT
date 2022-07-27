#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerType.generated.h"

UENUM()
enum class EMagicLeapControllerType : uint8 {
    None,
    Device,
    MobileApp,
};

