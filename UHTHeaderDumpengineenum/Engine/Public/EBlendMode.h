#pragma once
#include "CoreMinimal.h"
#include "EBlendMode.generated.h"

UENUM(BlueprintType)
enum EBlendMode {
    BLEND_Opaque,
    BLEND_Masked,
    BLEND_Translucent,
    BLEND_Additive,
    BLEND_Modulate,
    BLEND_AlphaComposite,
    BLEND_AlphaHoldout,
    BLEND_MAX UMETA(Hidden),
};

