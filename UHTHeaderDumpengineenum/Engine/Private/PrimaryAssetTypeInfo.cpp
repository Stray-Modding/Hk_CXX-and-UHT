#include "PrimaryAssetTypeInfo.h"

FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo() {
    this->AssetBaseClassLoaded = NULL;
    this->bHasBlueprintClasses = false;
    this->bIsEditorOnly = false;
    this->bIsDynamicAsset = false;
    this->NumberOfAssets = 0;
}

