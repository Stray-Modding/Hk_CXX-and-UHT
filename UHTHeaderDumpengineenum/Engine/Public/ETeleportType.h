#pragma once
#include "CoreMinimal.h"
#include "ETeleportType.generated.h"

UENUM(BlueprintType)
enum class ETeleportType : uint8 {
    None,
    TeleportPhysics,
    ResetPhysics,
};

