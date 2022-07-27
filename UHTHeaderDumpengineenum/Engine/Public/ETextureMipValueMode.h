#pragma once
#include "CoreMinimal.h"
#include "ETextureMipValueMode.generated.h"

UENUM(BlueprintType)
enum ETextureMipValueMode {
    TMVM_None,
    TMVM_MipLevel,
    TMVM_MipBias,
    TMVM_Derivative,
    TMVM_MAX UMETA(Hidden),
};

