#pragma once
#include "CoreMinimal.h"
#include "ENodeEnabledState.generated.h"

UENUM(BlueprintType)
enum class ENodeEnabledState : uint8 {
    Enabled,
    Disabled,
    DevelopmentOnly,
};

