#pragma once
#include "CoreMinimal.h"
#include "EPrimaryAssetCookRule.generated.h"

UENUM(BlueprintType)
enum class EPrimaryAssetCookRule : uint8 {
    Unknown,
    NeverCook,
    DevelopmentCook,
    DevelopmentAlwaysCook,
    AlwaysCook,
};

