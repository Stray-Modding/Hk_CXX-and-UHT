#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureTextureAddressMode.generated.h"

UENUM(BlueprintType)
enum ERuntimeVirtualTextureTextureAddressMode {
    RVTTA_Clamp,
    RVTTA_Wrap,
    RVTTA_MAX UMETA(Hidden),
};

