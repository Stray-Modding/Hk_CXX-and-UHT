#pragma once
#include "CoreMinimal.h"
#include "ESaveIconState.generated.h"

UENUM()
enum class ESaveIconState {
    SaveIconState_Idle,
    SaveIconState_Flashing,
    SaveIconState_MAX UMETA(Hidden),
};

