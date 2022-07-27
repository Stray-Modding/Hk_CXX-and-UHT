#pragma once
#include "CoreMinimal.h"
#include "EBlueprintCompileMode.generated.h"

UENUM(BlueprintType)
enum class EBlueprintCompileMode : uint8 {
    Default,
    Development,
    FinalRelease,
};

