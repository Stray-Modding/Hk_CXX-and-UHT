#pragma once
#include "CoreMinimal.h"
#include "EKinematicBonesUpdateToPhysics.generated.h"

UENUM(BlueprintType)
namespace EKinematicBonesUpdateToPhysics {
    enum Type {
        SkipSimulatingBones,
        SkipAllBones,
    };
}

