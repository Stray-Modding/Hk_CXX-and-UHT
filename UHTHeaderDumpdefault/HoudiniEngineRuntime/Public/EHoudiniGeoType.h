#pragma once
#include "CoreMinimal.h"
#include "EHoudiniGeoType.generated.h"

UENUM()
enum class EHoudiniGeoType {
    Invalid,
    Default,
    Intermediate,
    Input,
    Curve,
};

