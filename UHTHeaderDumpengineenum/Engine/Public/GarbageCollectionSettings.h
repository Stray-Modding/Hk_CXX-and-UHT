#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GarbageCollectionSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UGarbageCollectionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float TimeBetweenPurgingPendingKillObjects;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 FlushStreamingOnGC: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 AllowParallelGC: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 IncrementalBeginDestroyEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 MultithreadedDestructionEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 CreateGCClusters: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 AssetClusteringEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ActorClusteringEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 BlueprintClusteringEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 UseDisregardForGCOnDedicatedServers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MinGCClusterSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumRetriesBeforeForcingGC;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxObjectsNotConsideredByGC;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SizeOfPermanentObjectPool;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxObjectsInGame;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxObjectsInEditor;
    
public:
    UGarbageCollectionSettings();
};

