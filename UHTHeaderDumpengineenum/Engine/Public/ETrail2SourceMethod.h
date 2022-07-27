#pragma once
#include "CoreMinimal.h"
#include "ETrail2SourceMethod.generated.h"

UENUM(BlueprintType)
enum ETrail2SourceMethod {
    PET2SRCM_Default,
    PET2SRCM_Particle,
    PET2SRCM_Actor,
    PET2SRCM_MAX UMETA(Hidden),
};

