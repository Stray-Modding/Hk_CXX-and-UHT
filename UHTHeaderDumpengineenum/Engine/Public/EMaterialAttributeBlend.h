#pragma once
#include "CoreMinimal.h"
#include "EMaterialAttributeBlend.generated.h"

UENUM(BlueprintType)
namespace EMaterialAttributeBlend {
    enum Type {
        Blend,
        UseA,
        UseB,
    };
}

