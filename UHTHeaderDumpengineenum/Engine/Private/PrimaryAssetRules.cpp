#include "PrimaryAssetRules.h"

FPrimaryAssetRules::FPrimaryAssetRules() {
    this->Priority = 0;
    this->ChunkId = 0;
    this->bApplyRecursively = false;
    this->CookRule = EPrimaryAssetCookRule::Unknown;
}

