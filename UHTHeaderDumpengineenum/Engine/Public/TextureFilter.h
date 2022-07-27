#pragma once
#include "CoreMinimal.h"
#include "TextureFilter.generated.h"

UENUM(BlueprintType)
enum TextureFilter {
    TF_Nearest,
    TF_Bilinear,
    TF_Trilinear,
    TF_Default,
    TF_MAX UMETA(Hidden),
};

