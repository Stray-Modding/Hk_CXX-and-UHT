#pragma once
#include "CoreMinimal.h"
#include "EBeaconConnectionState.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconClient.generated.h"

class AOnlineBeaconHostObject;
class UNetConnection;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconClient : public AOnlineBeacon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AOnlineBeaconHostObject* BeaconOwner;
    
    UPROPERTY()
    UNetConnection* BeaconConnection;
    
    UPROPERTY()
    EBeaconConnectionState ConnectionState;
    
public:
    AOnlineBeaconClient();
private:
    UFUNCTION(Client, Reliable)
    void ClientOnConnected();
    
};

