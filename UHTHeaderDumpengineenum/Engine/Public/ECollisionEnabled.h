#pragma once
#include "CoreMinimal.h"
#include "ECollisionEnabled.generated.h"

UENUM(BlueprintType)
namespace ECollisionEnabled {
    enum Type {
        NoCollision,
        QueryOnly,
        PhysicsOnly,
        QueryAndPhysics,
    };
}

