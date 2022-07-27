#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnlineBeacon.generated.h"

class UNetDriver;

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeacon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float BeaconConnectionInitialTimeout;
    
    UPROPERTY(Config)
    float BeaconConnectionTimeout;
    
    UPROPERTY()
    UNetDriver* NetDriver;
    
public:
    AOnlineBeacon();
};

