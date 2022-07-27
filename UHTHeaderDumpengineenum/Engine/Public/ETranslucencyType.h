#pragma once
#include "CoreMinimal.h"
#include "ETranslucencyType.generated.h"

UENUM(BlueprintType)
enum class ETranslucencyType : uint8 {
    Raster,
    RayTracing,
};

