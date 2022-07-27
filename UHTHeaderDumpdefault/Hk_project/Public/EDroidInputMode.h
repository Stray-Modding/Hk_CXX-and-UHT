#pragma once
#include "CoreMinimal.h"
#include "EDroidInputMode.generated.h"

UENUM()
enum class EDroidInputMode : uint8 {
    DroidInputMode_Spline,
    DroidInputMode_Manual,
    DroidInputMode_None,
    DroidInputMode_MAX UMETA(Hidden),
};

