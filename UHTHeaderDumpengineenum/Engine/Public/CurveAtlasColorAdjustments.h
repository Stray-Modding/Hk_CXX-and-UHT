#pragma once
#include "CoreMinimal.h"
#include "CurveAtlasColorAdjustments.generated.h"

USTRUCT()
struct FCurveAtlasColorAdjustments {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bChromaKeyTexture: 1;
    
    UPROPERTY()
    float AdjustBrightness;
    
    UPROPERTY()
    float AdjustBrightnessCurve;
    
    UPROPERTY()
    float AdjustVibrance;
    
    UPROPERTY()
    float AdjustSaturation;
    
    UPROPERTY()
    float AdjustRGBCurve;
    
    UPROPERTY()
    float AdjustHue;
    
    UPROPERTY()
    float AdjustMinAlpha;
    
    UPROPERTY()
    float AdjustMaxAlpha;
    
    ENGINE_API FCurveAtlasColorAdjustments();
};

