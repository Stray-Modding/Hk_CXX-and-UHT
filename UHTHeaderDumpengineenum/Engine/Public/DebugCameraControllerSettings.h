#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DebugCameraControllerSettingsViewModeIndex.h"
#include "DebugCameraControllerSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UDebugCameraControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;
    
    UDebugCameraControllerSettings();
};

