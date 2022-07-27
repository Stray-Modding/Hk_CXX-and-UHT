#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EUpdateClockSource -FallbackName=EUpdateClockSource
#include "LevelSequenceProjectSettings.generated.h"

UCLASS(DefaultConfig)
class ULevelSequenceProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bDefaultLockEngineToDisplayRate;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultDisplayRate;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultTickResolution;
    
    UPROPERTY(Config, EditAnywhere)
    EUpdateClockSource DefaultClockSource;
    
    ULevelSequenceProjectSettings();
};

