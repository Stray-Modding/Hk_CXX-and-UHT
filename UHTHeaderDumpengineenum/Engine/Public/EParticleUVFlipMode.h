#pragma once
#include "CoreMinimal.h"
#include "EParticleUVFlipMode.generated.h"

UENUM(BlueprintType)
enum class EParticleUVFlipMode : uint8 {
    None,
    FlipUV,
    FlipUOnly,
    FlipVOnly,
    RandomFlipUV,
    RandomFlipUOnly,
    RandomFlipVOnly,
    RandomFlipUVIndependent,
};

