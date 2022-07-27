#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPassableWorldError.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapPassableWorldError : uint8 {
    None,
    LowMapQuality,
    UnableToLocalize,
    Unavailable,
    PrivilegeDenied,
    InvalidParam,
    UnspecifiedFailure,
    PrivilegeRequestPending,
    StartupPending,
    SharedWorldNotEnabled,
    NotImplemented,
    PinNotFound,
};

