#pragma once
#include "CoreMinimal.h"
#include "EFontCacheType.generated.h"

UENUM(BlueprintType)
enum class EFontCacheType : uint8 {
    Offline,
    Runtime,
};

