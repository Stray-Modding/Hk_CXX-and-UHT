#pragma once
#include "CoreMinimal.h"
#include "ERenderFocusRule.generated.h"

UENUM(BlueprintType)
enum class ERenderFocusRule : uint8 {
    Always,
    NonPointer,
    NavigationOnly,
    Never,
};

