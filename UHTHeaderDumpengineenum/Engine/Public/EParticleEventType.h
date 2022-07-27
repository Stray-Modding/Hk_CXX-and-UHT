#pragma once
#include "CoreMinimal.h"
#include "EParticleEventType.generated.h"

UENUM(BlueprintType)
enum EParticleEventType {
    EPET_Any,
    EPET_Spawn,
    EPET_Death,
    EPET_Collision,
    EPET_Burst,
    EPET_Blueprint,
    EPET_MAX UMETA(Hidden),
};

