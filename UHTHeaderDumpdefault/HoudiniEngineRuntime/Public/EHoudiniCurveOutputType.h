#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveOutputType.generated.h"

UENUM()
enum class EHoudiniCurveOutputType : uint8 {
    UnrealSpline,
    HoudiniSpline,
};

