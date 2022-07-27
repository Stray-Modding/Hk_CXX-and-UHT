#pragma once
#include "CoreMinimal.h"
#include "EParticleSubUVInterpMethod.generated.h"

UENUM(BlueprintType)
enum EParticleSubUVInterpMethod {
    PSUVIM_None,
    PSUVIM_Linear,
    PSUVIM_Linear_Blend,
    PSUVIM_Random,
    PSUVIM_Random_Blend,
    PSUVIM_MAX UMETA(Hidden),
};

