#pragma once
#include "CoreMinimal.h"
#include "EParticleCollisionResponse.generated.h"

UENUM(BlueprintType)
namespace EParticleCollisionResponse {
    enum Type {
        Bounce,
        Stop,
        Kill,
    };
}

