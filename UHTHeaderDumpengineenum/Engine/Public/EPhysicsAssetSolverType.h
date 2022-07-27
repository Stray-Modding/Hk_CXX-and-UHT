#pragma once
#include "CoreMinimal.h"
#include "EPhysicsAssetSolverType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsAssetSolverType : uint8 {
    RBAN,
    World,
};

