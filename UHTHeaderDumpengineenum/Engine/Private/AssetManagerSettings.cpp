#include "AssetManagerSettings.h"

UAssetManagerSettings::UAssetManagerSettings() {
    this->PrimaryAssetTypesToScan.AddDefaulted(2);
    this->bOnlyCookProductionAssets = false;
    this->bShouldManagerDetermineTypeAndName = false;
    this->bShouldGuessTypeAndNameInEditor = true;
    this->bShouldAcquireMissingChunksOnLoad = false;
}

