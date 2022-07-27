#pragma once
#include "CoreMinimal.h"
#include "EStaticMeshReductionTerimationCriterion.generated.h"

UENUM(BlueprintType)
enum class EStaticMeshReductionTerimationCriterion : uint8 {
    Triangles,
    Vertices,
    Any,
};

