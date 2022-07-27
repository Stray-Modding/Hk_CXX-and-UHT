#pragma once
#include "CoreMinimal.h"
#include "EMaterialDecalResponse.generated.h"

UENUM(BlueprintType)
enum EMaterialDecalResponse {
    MDR_None,
    MDR_ColorNormalRoughness,
    MDR_Color,
    MDR_ColorNormal,
    MDR_ColorRoughness,
    MDR_Normal,
    MDR_NormalRoughness,
    MDR_Roughness,
    MDR_MAX UMETA(Hidden),
};

