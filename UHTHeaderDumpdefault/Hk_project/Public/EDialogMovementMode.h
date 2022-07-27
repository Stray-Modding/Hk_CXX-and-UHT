#pragma once
#include "CoreMinimal.h"
#include "EDialogMovementMode.generated.h"

UENUM()
enum EDialogMovementMode {
    DialogMovementMode_None,
    DialogMovementMode_Constrained,
    DialogMovementMode_Free,
    DialogMovementMode_MAX UMETA(Hidden),
};

