#pragma once
#include "CoreMinimal.h"
#include "EMaterialTessellationMode.generated.h"

UENUM(BlueprintType)
enum EMaterialTessellationMode {
    MTM_NoTessellation,
    MTM_FlatTessellation,
    MTM_PNTriangles,
    MTM_MAX UMETA(Hidden),
};

