#pragma once
#include "CoreMinimal.h"
#include "EParticleSystemOcclusionBoundsMethod.generated.h"

UENUM(BlueprintType)
enum EParticleSystemOcclusionBoundsMethod {
    EPSOBM_None,
    EPSOBM_ParticleBounds,
    EPSOBM_CustomBounds,
    EPSOBM_MAX UMETA(Hidden),
};

