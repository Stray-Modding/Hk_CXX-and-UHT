#pragma once
#include "CoreMinimal.h"
#include "ESkinCacheUsage.generated.h"

UENUM(BlueprintType)
enum class ESkinCacheUsage : uint8 {
    Auto,
    Disabled = 0xFF,
    Enabled = 0x1,
    ESkinCacheUsage_MAX = 0x100,
};

