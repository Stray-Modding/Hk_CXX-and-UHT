#pragma once
#include "CoreMinimal.h"
#include "EParticleSignificanceLevel.generated.h"

UENUM(BlueprintType)
enum class EParticleSignificanceLevel : uint8 {
    Low,
    Medium,
    High,
    Critical,
    Num,
};

