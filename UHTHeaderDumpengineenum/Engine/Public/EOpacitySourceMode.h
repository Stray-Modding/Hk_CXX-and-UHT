#pragma once
#include "CoreMinimal.h"
#include "EOpacitySourceMode.generated.h"

UENUM(BlueprintType)
enum EOpacitySourceMode {
    OSM_Alpha,
    OSM_ColorBrightness,
    OSM_RedChannel,
    OSM_GreenChannel,
    OSM_BlueChannel,
    OSM_MAX UMETA(Hidden),
};

