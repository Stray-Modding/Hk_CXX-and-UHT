#pragma once
#include "CoreMinimal.h"
#include "LightmassLightSettings.generated.h"

USTRUCT()
struct FLightmassLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float IndirectLightingSaturation;
    
    UPROPERTY(EditAnywhere)
    float ShadowExponent;
    
    UPROPERTY(EditAnywhere)
    bool bUseAreaShadowsForStationaryLight;
    
    ENGINE_API FLightmassLightSettings();
};

