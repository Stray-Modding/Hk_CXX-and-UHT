#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMainPassType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeVirtualTextureMainPassType : uint8 {
    Never,
    Exclusive,
    Always,
};

