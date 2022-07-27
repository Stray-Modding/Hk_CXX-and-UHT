#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChannelDefinition.h"
#include "NetDriver.generated.h"

class UChannel;
class UNetConnection;
class UWorld;
class UPackage;
class UReplicationDriver;

UCLASS(Abstract, MinimalAPI, Transient)
class UNetDriver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString NetConnectionClassName;
    
    UPROPERTY(Config)
    FString ReplicationDriverClassName;
    
    UPROPERTY(Config)
    int32 MaxDownloadSize;
    
    UPROPERTY(Config)
    uint8 bClampListenServerTickRate: 1;
    
    UPROPERTY(Config)
    int32 NetServerMaxTickRate;
    
    UPROPERTY(Config)
    int32 MaxNetTickRate;
    
    UPROPERTY(Config)
    int32 MaxInternetClientRate;
    
    UPROPERTY(Config)
    int32 MaxClientRate;
    
    UPROPERTY(Config)
    float ServerTravelPause;
    
    UPROPERTY(Config)
    float SpawnPrioritySeconds;
    
    UPROPERTY(Config)
    float RelevantTimeout;
    
    UPROPERTY(Config)
    float KeepAliveTime;
    
    UPROPERTY(Config)
    float InitialConnectTimeout;
    
    UPROPERTY(Config)
    float ConnectionTimeout;
    
    UPROPERTY(Config)
    float TimeoutMultiplierForUnoptimizedBuilds;
    
    UPROPERTY(Config)
    bool bNoTimeouts;
    
    UPROPERTY(Config)
    bool bNeverApplyNetworkEmulationSettings;
    
    UPROPERTY()
    UNetConnection* ServerConnection;
    
    UPROPERTY()
    TArray<UNetConnection*> ClientConnections;
    
    UPROPERTY(Config)
    int32 RecentlyDisconnectedTrackingTime;
    
    UPROPERTY()
    UWorld* World;
    
    UPROPERTY()
    UPackage* WorldPackage;
    
    UPROPERTY()
    UClass* NetConnectionClass;
    
    UPROPERTY()
    UClass* ReplicationDriverClass;
    
    UPROPERTY(Config)
    FName NetDriverName;
    
    UPROPERTY(Config)
    TArray<FChannelDefinition> ChannelDefinitions;
    
    UPROPERTY()
    TMap<FName, FChannelDefinition> ChannelDefinitionMap;
    
private:
    UPROPERTY()
    TArray<UChannel*> ActorChannelPool;
    
public:
    UPROPERTY()
    float Time;
    
private:
    UPROPERTY(Transient)
    UReplicationDriver* ReplicationDriver;
    
public:
    UNetDriver();
};

