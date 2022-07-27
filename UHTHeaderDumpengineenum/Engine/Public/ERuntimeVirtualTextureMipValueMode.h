#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMipValueMode.generated.h"

UENUM(BlueprintType)
enum ERuntimeVirtualTextureMipValueMode {
    RVTMVM_None,
    RVTMVM_MipLevel,
    RVTMVM_MipBias,
    RVTMVM_MAX UMETA(Hidden),
};

