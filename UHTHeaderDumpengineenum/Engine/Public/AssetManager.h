#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetManager.generated.h"

UCLASS()
class ENGINE_API UAssetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UObject*> ObjectReferenceList;
    
    UPROPERTY()
    bool bIsGlobalAsyncScanEnvironment;
    
    UPROPERTY()
    bool bShouldGuessTypeAndName;
    
    UPROPERTY()
    bool bShouldUseSynchronousLoad;
    
    UPROPERTY()
    bool bIsLoadingFromPakFiles;
    
    UPROPERTY()
    bool bShouldAcquireMissingChunksOnLoad;
    
    UPROPERTY()
    bool bOnlyCookProductionAssets;
    
    UPROPERTY()
    bool bIsBulkScanning;
    
    UPROPERTY()
    bool bIsPrimaryAssetDirectoryCurrent;
    
    UPROPERTY()
    bool bIsManagementDatabaseCurrent;
    
    UPROPERTY()
    bool bUpdateManagementDatabaseAfterScan;
    
    UPROPERTY()
    bool bIncludeOnlyOnDiskAssets;
    
    UPROPERTY()
    bool bHasCompletedInitialScan;
    
    UPROPERTY()
    int32 NumberOfSpawnedNotifications;
    
public:
    UAssetManager();
};

