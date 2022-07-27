#pragma once
#include "CoreMinimal.h"
#include "EParticleScreenAlignment.generated.h"

UENUM(BlueprintType)
enum EParticleScreenAlignment {
    PSA_FacingCameraPosition,
    PSA_Square,
    PSA_Rectangle,
    PSA_Velocity,
    PSA_AwayFromCenter,
    PSA_TypeSpecific,
    PSA_FacingCameraDistanceBlend,
    PSA_MAX UMETA(Hidden),
};

