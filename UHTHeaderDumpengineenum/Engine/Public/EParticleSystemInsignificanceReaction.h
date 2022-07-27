#pragma once
#include "CoreMinimal.h"
#include "EParticleSystemInsignificanceReaction.generated.h"

UENUM(BlueprintType)
enum class EParticleSystemInsignificanceReaction : uint8 {
    Auto,
    Complete,
    DisableTick,
    DisableTickAndKill,
    Num,
};

