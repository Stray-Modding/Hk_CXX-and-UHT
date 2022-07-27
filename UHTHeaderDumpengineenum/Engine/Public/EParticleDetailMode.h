#pragma once
#include "CoreMinimal.h"
#include "EParticleDetailMode.generated.h"

UENUM(BlueprintType)
enum EParticleDetailMode {
    PDM_Low,
    PDM_Medium,
    PDM_High,
    PDM_MAX UMETA(Hidden),
};

