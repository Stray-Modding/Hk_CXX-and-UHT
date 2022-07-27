#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "LandscapeSettings.generated.h"

UCLASS(DefaultConfig)
class LANDSCAPE_API ULandscapeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxNumberOfLayers;
    
    ULandscapeSettings();
};

