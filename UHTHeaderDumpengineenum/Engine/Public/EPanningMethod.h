#pragma once
#include "CoreMinimal.h"
#include "EPanningMethod.generated.h"

UENUM()
enum class EPanningMethod : int8 {
    Linear,
    EqualPower,
};

