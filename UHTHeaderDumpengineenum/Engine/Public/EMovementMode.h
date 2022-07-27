#pragma once
#include "CoreMinimal.h"
#include "EMovementMode.generated.h"

UENUM(BlueprintType)
enum EMovementMode {
    MOVE_None,
    MOVE_Walking,
    MOVE_NavWalking,
    MOVE_Falling,
    MOVE_Swimming,
    MOVE_Flying,
    MOVE_Custom,
    MOVE_MAX UMETA(Hidden),
};

