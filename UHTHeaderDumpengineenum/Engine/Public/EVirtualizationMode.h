#pragma once
#include "CoreMinimal.h"
#include "EVirtualizationMode.generated.h"

UENUM(BlueprintType)
enum class EVirtualizationMode : uint8 {
    Disabled,
    PlayWhenSilent,
    Restart,
};

