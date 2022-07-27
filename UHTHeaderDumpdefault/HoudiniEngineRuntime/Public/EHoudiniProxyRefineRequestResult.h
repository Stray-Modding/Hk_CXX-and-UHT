#pragma once
#include "CoreMinimal.h"
#include "EHoudiniProxyRefineRequestResult.generated.h"

UENUM()
enum class EHoudiniProxyRefineRequestResult {
    Invalid,
    None,
    PendingCooks,
    Refined,
};

