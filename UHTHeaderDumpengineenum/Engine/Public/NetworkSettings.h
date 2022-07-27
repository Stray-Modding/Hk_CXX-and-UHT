#pragma once
#include "CoreMinimal.h"
#include "NetworkEmulationProfileDescription.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "NetworkSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UNetworkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bVerifyPeer: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEnableMultiplayerWorldOriginRebasing: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxRepArraySize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxRepArrayMemory;
    
    UPROPERTY(Config)
    TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles;
    
    UNetworkSettings();
};

