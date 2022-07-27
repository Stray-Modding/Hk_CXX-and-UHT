#pragma once
#include "CoreMinimal.h"
#include "URL.h"
#include "FullyLoadedPackagesInfo.h"
#include "LevelStreamingStatus.h"
#include "NamedNetDriver.h"
#include "WorldContext.generated.h"

class UGameViewportClient;
class UObjectReferencer;
class UPendingNetGame;
class ULevel;
class UGameInstance;

USTRUCT()
struct FWorldContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    FURL LastURL;
    
    UPROPERTY()
    FURL LastRemoteURL;
    
    UPROPERTY()
    UPendingNetGame* PendingNetGame;
    
    UPROPERTY()
    TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad;
    
    UPROPERTY()
    TArray<ULevel*> LoadedLevelsForPendingMapChange;
    
    UPROPERTY()
    TArray<UObjectReferencer*> ObjectReferencers;
    
    UPROPERTY()
    TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates;
    
    UPROPERTY()
    UGameViewportClient* GameViewport;
    
    UPROPERTY()
    UGameInstance* OwningGameInstance;
    
    UPROPERTY(Transient)
    TArray<FNamedNetDriver> ActiveNetDrivers;
    
    ENGINE_API FWorldContext();
};

