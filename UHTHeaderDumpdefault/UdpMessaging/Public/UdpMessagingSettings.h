#pragma once
#include "CoreMinimal.h"
#include "EUdpMessageFormat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UdpMessagingSettings.generated.h"

UCLASS()
class UUdpMessagingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool EnabledByDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableTransport;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bAutoRepair;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MaxSendRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint32 AutoRepairAttemptLimit;
    
    UPROPERTY(Config)
    bool bStopServiceWhenAppDeactivates;
    
    UPROPERTY(Config, EditAnywhere)
    FString UnicastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    FString MulticastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    EUdpMessageFormat MessageFormat;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 MulticastTimeToLive;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> StaticEndpoints;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableTunnel;
    
    UPROPERTY(Config, EditAnywhere)
    FString TunnelUnicastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    FString TunnelMulticastEndpoint;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> RemoteTunnelEndpoints;
    
    UUdpMessagingSettings();
};

