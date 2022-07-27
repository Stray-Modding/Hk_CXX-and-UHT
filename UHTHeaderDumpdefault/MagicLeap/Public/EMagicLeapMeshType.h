#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapMeshType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapMeshType : uint8 {
    Triangles,
    PointCloud,
};

