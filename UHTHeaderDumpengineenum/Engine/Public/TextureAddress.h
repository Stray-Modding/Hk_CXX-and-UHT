#pragma once
#include "CoreMinimal.h"
#include "TextureAddress.generated.h"

UENUM(BlueprintType)
enum TextureAddress {
    TA_Wrap,
    TA_Clamp,
    TA_Mirror,
    TA_MAX UMETA(Hidden),
};

