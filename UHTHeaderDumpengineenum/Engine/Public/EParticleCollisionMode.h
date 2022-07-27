#pragma once
#include "CoreMinimal.h"
#include "EParticleCollisionMode.generated.h"

UENUM(BlueprintType)
namespace EParticleCollisionMode {
    enum Type {
        SceneDepth,
        DistanceField,
    };
}

