#pragma once
#include "CoreMinimal.h"
#include "ETextureColorChannel.generated.h"

UENUM(BlueprintType)
enum ETextureColorChannel {
    TCC_Red,
    TCC_Green,
    TCC_Blue,
    TCC_Alpha,
    TCC_MAX UMETA(Hidden),
};

