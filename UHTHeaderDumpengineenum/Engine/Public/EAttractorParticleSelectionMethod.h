#pragma once
#include "CoreMinimal.h"
#include "EAttractorParticleSelectionMethod.generated.h"

UENUM(BlueprintType)
enum EAttractorParticleSelectionMethod {
    EAPSM_Random,
    EAPSM_Sequential,
    EAPSM_MAX UMETA(Hidden),
};

