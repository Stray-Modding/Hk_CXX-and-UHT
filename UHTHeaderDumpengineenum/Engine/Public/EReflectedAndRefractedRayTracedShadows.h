#pragma once
#include "CoreMinimal.h"
#include "EReflectedAndRefractedRayTracedShadows.generated.h"

UENUM(BlueprintType)
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
    Disabled,
    Hard_shadows,
    Area_shadows,
};

