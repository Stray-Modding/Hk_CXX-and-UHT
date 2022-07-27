#pragma once
#include "CoreMinimal.h"
#include "ERayTracingGlobalIlluminationType.generated.h"

UENUM(BlueprintType)
enum class ERayTracingGlobalIlluminationType : uint8 {
    Disabled,
    BruteForce,
    FinalGather,
};

