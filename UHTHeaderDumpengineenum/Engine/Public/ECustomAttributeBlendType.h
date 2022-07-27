#pragma once
#include "CoreMinimal.h"
#include "ECustomAttributeBlendType.generated.h"

UENUM(BlueprintType)
enum class ECustomAttributeBlendType : uint8 {
    Override,
    Blend,
};

