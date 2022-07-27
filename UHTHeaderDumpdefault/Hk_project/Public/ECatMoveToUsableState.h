#pragma once
#include "CoreMinimal.h"
#include "ECatMoveToUsableState.generated.h"

UENUM()
enum ECatMoveToUsableState {
    CatMoveToUsableState_None,
    CatMoveToUsableState_MovingTo,
    CatMoveToUsableState_Using,
    CatMoveToUsableState_MAX UMETA(Hidden),
};

