#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshOptimizationType.generated.h"

UENUM(BlueprintType)
enum SkeletalMeshOptimizationType {
    SMOT_NumOfTriangles,
    SMOT_MaxDeviation,
    SMOT_TriangleOrDeviation,
    SMOT_MAX UMETA(Hidden),
};

