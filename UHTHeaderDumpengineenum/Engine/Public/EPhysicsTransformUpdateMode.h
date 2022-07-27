#pragma once
#include "CoreMinimal.h"
#include "EPhysicsTransformUpdateMode.generated.h"

UENUM(BlueprintType)
namespace EPhysicsTransformUpdateMode {
    enum Type {
        SimulationUpatesComponentTransform,
        ComponentTransformIsKinematic,
    };
}

