#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampPointConstructStatus.generated.h"

UENUM()
enum class EHoudiniRampPointConstructStatus {
    None,
    INITIALIZED,
    POSITION_INSERTED,
    VALUE_INSERTED,
    INTERPTYPE_INSERTED,
};

