#include "AssetManagerSearchRules.h"

FAssetManagerSearchRules::FAssetManagerSearchRules() {
    this->AssetBaseClass = NULL;
    this->bHasBlueprintClasses = false;
    this->bForceSynchronousScan = false;
    this->bSkipVirtualPathExpansion = false;
    this->bSkipManagerIncludeCheck = false;
}

