#pragma once
#include "CoreMinimal.h"
#include "EHoudiniXformType.generated.h"

UENUM()
enum class EHoudiniXformType : uint8 {
    None,
    IntoThisObject,
    Auto,
};

