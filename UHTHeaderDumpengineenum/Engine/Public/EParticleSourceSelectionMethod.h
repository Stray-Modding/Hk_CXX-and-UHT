#pragma once
#include "CoreMinimal.h"
#include "EParticleSourceSelectionMethod.generated.h"

UENUM(BlueprintType)
enum EParticleSourceSelectionMethod {
    EPSSM_Random,
    EPSSM_Sequential,
    EPSSM_MAX UMETA(Hidden),
};

