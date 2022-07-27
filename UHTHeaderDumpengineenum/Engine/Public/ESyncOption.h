#pragma once
#include "CoreMinimal.h"
#include "ESyncOption.generated.h"

UENUM(BlueprintType)
enum class ESyncOption : uint8 {
    Drive,
    Passive,
    Disabled,
};

