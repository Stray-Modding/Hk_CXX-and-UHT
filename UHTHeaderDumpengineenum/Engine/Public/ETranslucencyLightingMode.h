#pragma once
#include "CoreMinimal.h"
#include "ETranslucencyLightingMode.generated.h"

UENUM(BlueprintType)
enum ETranslucencyLightingMode {
    TLM_VolumetricNonDirectional,
    TLM_VolumetricDirectional,
    TLM_VolumetricPerVertexNonDirectional,
    TLM_VolumetricPerVertexDirectional,
    TLM_Surface,
    TLM_SurfacePerPixelLighting,
    TLM_MAX UMETA(Hidden),
};

