#pragma once
#include "CoreMinimal.h"
#include "EControllerAnalogStick.generated.h"

UENUM(BlueprintType)
namespace EControllerAnalogStick {
    enum Type {
        CAS_LeftStick,
        CAS_RightStick,
        CAS_MAX UMETA(Hidden),
    };
}

