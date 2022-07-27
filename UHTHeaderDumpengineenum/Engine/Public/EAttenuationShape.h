#pragma once
#include "CoreMinimal.h"
#include "EAttenuationShape.generated.h"

UENUM(BlueprintType)
namespace EAttenuationShape {
    enum Type {
        Sphere,
        Capsule,
        Box,
        Cone,
    };
}

