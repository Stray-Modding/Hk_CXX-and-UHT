#pragma once
#include "CoreMinimal.h"
#include "ParticleSystemLODMethod.generated.h"

UENUM(BlueprintType)
enum ParticleSystemLODMethod {
    PARTICLESYSTEMLODMETHOD_Automatic,
    PARTICLESYSTEMLODMETHOD_DirectSet,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic,
    PARTICLESYSTEMLODMETHOD_MAX UMETA(Hidden),
};

