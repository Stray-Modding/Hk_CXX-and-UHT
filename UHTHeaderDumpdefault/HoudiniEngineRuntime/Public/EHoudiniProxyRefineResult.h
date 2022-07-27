#pragma once
#include "CoreMinimal.h"
#include "EHoudiniProxyRefineResult.generated.h"

UENUM()
enum class EHoudiniProxyRefineResult {
    Invalid,
    Failed,
    Success,
    Skipped,
};

