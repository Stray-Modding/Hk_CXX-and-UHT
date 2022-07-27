#pragma once
#include "CoreMinimal.h"
#include "EParticleBurstMethod.generated.h"

UENUM(BlueprintType)
enum EParticleBurstMethod {
    EPBM_Instant,
    EPBM_Interpolated,
    EPBM_MAX UMETA(Hidden),
};

