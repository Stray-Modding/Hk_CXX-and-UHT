#pragma once
#include "CoreMinimal.h"
#include "EBlueprintNativizationFlag.generated.h"

UENUM(BlueprintType)
enum class EBlueprintNativizationFlag : uint8 {
    Disabled,
    Dependency,
    ExplicitlyEnabled,
};

