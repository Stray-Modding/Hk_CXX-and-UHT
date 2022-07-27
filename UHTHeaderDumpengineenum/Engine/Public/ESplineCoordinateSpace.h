#pragma once
#include "CoreMinimal.h"
#include "ESplineCoordinateSpace.generated.h"

UENUM(BlueprintType)
namespace ESplineCoordinateSpace {
    enum Type {
        Local,
        World,
    };
}

