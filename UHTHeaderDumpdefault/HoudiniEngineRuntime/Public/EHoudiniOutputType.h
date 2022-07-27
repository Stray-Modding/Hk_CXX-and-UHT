#pragma once
#include "CoreMinimal.h"
#include "EHoudiniOutputType.generated.h"

UENUM()
enum class EHoudiniOutputType : uint8 {
    Invalid,
    Mesh,
    Instancer,
    Landscape,
    Curve,
    Skeletal,
    GeometryCollection,
};

