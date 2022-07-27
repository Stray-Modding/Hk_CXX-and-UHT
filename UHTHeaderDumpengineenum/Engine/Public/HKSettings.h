#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "HKSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UHKSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    bool GarbageCollectionOnMapChange;
    
    UPROPERTY(Config, EditAnywhere)
    bool KeepCommonLevelsOnMapChange;
    
    UPROPERTY(Config, EditAnywhere)
    bool AmortizeActorInitialization;
    
    UPROPERTY(Config, EditAnywhere)
    bool IgnoreHigherFadeOutRequests;
    
    UPROPERTY(Config, EditAnywhere)
    float StreamingVolumeExitHysteresis;
    
public:
    UHKSettings();
};

