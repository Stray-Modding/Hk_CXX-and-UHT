#pragma once
#include "CoreMinimal.h"
#include "ETextureMipLoadOptions.generated.h"

UENUM(BlueprintType)
enum class ETextureMipLoadOptions : uint8 {
    Default,
    AllMips,
    OnlyFirstMip,
};

