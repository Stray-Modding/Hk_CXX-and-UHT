#pragma once
#include "CoreMinimal.h"
#include "EMeshScreenAlignment.generated.h"

UENUM(BlueprintType)
enum EMeshScreenAlignment {
    PSMA_MeshFaceCameraWithRoll,
    PSMA_MeshFaceCameraWithSpin,
    PSMA_MeshFaceCameraWithLockedAxis,
    PSMA_MAX UMETA(Hidden),
};

