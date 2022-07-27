#pragma once
#include "CoreMinimal.h"
#include "ELightmapType.generated.h"

UENUM(BlueprintType)
enum class ELightmapType : uint8 {
    Default,
    ForceSurface,
    ForceVolumetric,
};

