#pragma once
#include "CoreMinimal.h"
#include "EParticleAxisLock.generated.h"

UENUM(BlueprintType)
enum EParticleAxisLock {
    EPAL_NONE,
    EPAL_X,
    EPAL_Y,
    EPAL_Z,
    EPAL_NEGATIVE_X,
    EPAL_NEGATIVE_Y,
    EPAL_NEGATIVE_Z,
    EPAL_ROTATE_X,
    EPAL_ROTATE_Y,
    EPAL_ROTATE_Z,
    EPAL_MAX UMETA(Hidden),
};

