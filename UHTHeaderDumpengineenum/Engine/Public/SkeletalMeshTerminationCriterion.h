#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshTerminationCriterion.generated.h"

UENUM(BlueprintType)
enum SkeletalMeshTerminationCriterion {
    SMTC_NumOfTriangles,
    SMTC_NumOfVerts,
    SMTC_TriangleOrVert,
    SMTC_AbsNumOfTriangles,
    SMTC_AbsNumOfVerts,
    SMTC_AbsTriangleOrVert,
    SMTC_MAX UMETA(Hidden),
};

