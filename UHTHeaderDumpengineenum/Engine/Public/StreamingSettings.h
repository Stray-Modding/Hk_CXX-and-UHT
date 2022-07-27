#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "StreamingSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UStreamingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    uint8 AsyncLoadingThreadEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 WarnIfTimeLimitExceeded: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float TimeLimitExceededMultiplier;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float TimeLimitExceededMinTime;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 MinBulkDataSizeForAsyncLoading;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 UseBackgroundLevelStreaming: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 AsyncLoadingUseFullTimeLimit: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float AsyncLoadingTimeLimit;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float PriorityAsyncLoadingExtraTime;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float LevelStreamingActorsUpdateTimeLimit;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float PriorityLevelStreamingActorsUpdateExtraTime;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 LevelStreamingComponentsRegistrationGranularity;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float LevelStreamingUnregisterComponentsTimeLimit;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 LevelStreamingComponentsUnregistrationGranularity;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 FlushStreamingOnExit: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 EventDrivenLoaderEnabled: 1;
    
public:
    UStreamingSettings();
};

