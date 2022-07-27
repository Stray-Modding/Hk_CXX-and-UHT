#pragma once
#include "CoreMinimal.h"
#include "FNavigationSystemRunMode.generated.h"

UENUM(BlueprintType)
enum class FNavigationSystemRunMode : uint8 {
    InvalidMode,
    GameMode,
    EditorMode,
    SimulationMode,
    PIEMode,
    InferFromWorldMode,
};

