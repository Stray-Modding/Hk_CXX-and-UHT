#pragma once
#include "CoreMinimal.h"
#include "EMeshLODSelectionType.generated.h"

UENUM(BlueprintType)
enum class EMeshLODSelectionType : uint8 {
    AllLODs,
    SpecificLOD,
    CalculateLOD,
    LowestDetailLOD,
};

