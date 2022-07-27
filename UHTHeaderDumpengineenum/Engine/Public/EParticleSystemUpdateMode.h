#pragma once
#include "CoreMinimal.h"
#include "EParticleSystemUpdateMode.generated.h"

UENUM(BlueprintType)
enum EParticleSystemUpdateMode {
    EPSUM_RealTime,
    EPSUM_FixedTime,
    EPSUM_MAX UMETA(Hidden),
};

