#pragma once
#include "CoreMinimal.h"
#include "EParticleCollisionComplete.generated.h"

UENUM(BlueprintType)
enum EParticleCollisionComplete {
    EPCC_Kill,
    EPCC_Freeze,
    EPCC_HaltCollisions,
    EPCC_FreezeTranslation,
    EPCC_FreezeRotation,
    EPCC_FreezeMovement,
    EPCC_MAX UMETA(Hidden),
};

