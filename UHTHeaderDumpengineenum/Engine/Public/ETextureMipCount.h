#pragma once
#include "CoreMinimal.h"
#include "ETextureMipCount.generated.h"

UENUM(BlueprintType)
enum ETextureMipCount {
    TMC_ResidentMips,
    TMC_AllMips,
    TMC_AllMipsBiased,
    TMC_MAX UMETA(Hidden),
};

