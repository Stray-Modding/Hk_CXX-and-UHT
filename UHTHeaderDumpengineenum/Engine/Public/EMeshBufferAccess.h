#pragma once
#include "CoreMinimal.h"
#include "EMeshBufferAccess.generated.h"

UENUM(BlueprintType)
enum class EMeshBufferAccess : uint8 {
    Default,
    ForceCPUAndGPU,
};

