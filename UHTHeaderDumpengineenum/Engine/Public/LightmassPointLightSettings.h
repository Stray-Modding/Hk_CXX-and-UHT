#pragma once
#include "CoreMinimal.h"
#include "LightmassLightSettings.h"
#include "LightmassPointLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightmassPointLightSettings : public FLightmassLightSettings {
    GENERATED_BODY()
public:
    ENGINE_API FLightmassPointLightSettings();
};

