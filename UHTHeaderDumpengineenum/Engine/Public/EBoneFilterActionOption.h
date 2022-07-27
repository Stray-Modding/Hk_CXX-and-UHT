#pragma once
#include "CoreMinimal.h"
#include "EBoneFilterActionOption.generated.h"

UENUM(BlueprintType)
enum class EBoneFilterActionOption : uint8 {
    Remove,
    Keep,
    Invalid,
};

