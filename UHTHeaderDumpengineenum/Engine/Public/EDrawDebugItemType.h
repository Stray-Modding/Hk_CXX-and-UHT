#pragma once
#include "CoreMinimal.h"
#include "EDrawDebugItemType.generated.h"

UENUM(BlueprintType)
namespace EDrawDebugItemType {
    enum Type {
        DirectionalArrow,
        Sphere,
        Line,
        OnScreenMessage,
        CoordinateSystem,
    };
}

