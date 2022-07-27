#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapMeshVertexColorMode.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapMeshVertexColorMode : uint8 {
    None,
    Confidence,
    Block,
    LOD,
};

