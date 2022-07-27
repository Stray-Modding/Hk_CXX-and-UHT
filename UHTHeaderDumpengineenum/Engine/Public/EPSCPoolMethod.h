#pragma once
#include "CoreMinimal.h"
#include "EPSCPoolMethod.generated.h"

UENUM(BlueprintType)
enum class EPSCPoolMethod : uint8 {
    None,
    AutoRelease,
    ManualRelease,
    ManualRelease_OnComplete,
    FreeInPool,
};

