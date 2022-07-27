#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Player.h"
#include "UniqueNetIdRepl.h"
#include "NetConnection.generated.h"

class UPackageMap;
class UChildConnection;
class UNetDriver;
class UChannel;
class AActor;

UCLASS(Abstract, MinimalAPI, NonTransient)
class UNetConnection : public UPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UChildConnection*> Children;
    
    UPROPERTY()
    UNetDriver* Driver;
    
    UPROPERTY()
    TSubclassOf<UPackageMap> PackageMapClass;
    
    UPROPERTY()
    UPackageMap* PackageMap;
    
    UPROPERTY()
    TArray<UChannel*> OpenChannels;
    
    UPROPERTY()
    TArray<AActor*> SentTemporaries;
    
    UPROPERTY()
    AActor* ViewTarget;
    
    UPROPERTY()
    AActor* OwningActor;
    
    UPROPERTY()
    int32 MaxPacket;
    
    UPROPERTY()
    uint8 InternalAck: 1;
    
    UPROPERTY()
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY()
    double LastReceiveTime;
    
private:
    UPROPERTY()
    TArray<UChannel*> ChannelsToTick;
    
public:
    UNetConnection();
};

