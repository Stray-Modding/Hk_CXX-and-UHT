#pragma once
#include "CoreMinimal.h"
#include "ESubUVBoundingVertexCount.generated.h"

UENUM(BlueprintType)
enum ESubUVBoundingVertexCount {
    BVC_FourVertices,
    BVC_EightVertices,
    BVC_MAX UMETA(Hidden),
};

