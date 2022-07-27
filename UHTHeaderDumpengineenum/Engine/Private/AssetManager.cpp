#include "AssetManager.h"

UAssetManager::UAssetManager() {
    this->bIsGlobalAsyncScanEnvironment = false;
    this->bShouldGuessTypeAndName = false;
    this->bShouldUseSynchronousLoad = false;
    this->bIsLoadingFromPakFiles = false;
    this->bShouldAcquireMissingChunksOnLoad = false;
    this->bOnlyCookProductionAssets = false;
    this->bIsBulkScanning = false;
    this->bIsPrimaryAssetDirectoryCurrent = false;
    this->bIsManagementDatabaseCurrent = false;
    this->bUpdateManagementDatabaseAfterScan = false;
    this->bIncludeOnlyOnDiskAssets = true;
    this->bHasCompletedInitialScan = false;
    this->NumberOfSpawnedNotifications = 0;
}

