#pragma once
#include "CoreMinimal.h"
#include "ECatDirectionMode.generated.h"

UENUM()
enum ECatDirectionMode {
    CatDirectionMode_StickDirection,
    CatDirectionMode_InputRotation,
    CatDirectionMode_MAX UMETA(Hidden),
};

