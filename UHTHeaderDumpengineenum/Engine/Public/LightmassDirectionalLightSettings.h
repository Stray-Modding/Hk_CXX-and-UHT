#pragma once
#include "CoreMinimal.h"
#include "LightmassLightSettings.h"
#include "LightmassDirectionalLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LightSourceAngle;
    
    ENGINE_API FLightmassDirectionalLightSettings();
};

