#pragma once
#include "CoreMinimal.h"
#include "AnimPhysCollisionType.generated.h"

UENUM(BlueprintType)
enum class AnimPhysCollisionType : uint8 {
    CoM,
    CustomSphere,
    InnerSphere,
    OuterSphere,
};

