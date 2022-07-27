#include "SoundNodeRandom.h"

USoundNodeRandom::USoundNodeRandom() {
    this->NumRandomUsed = 0;
    this->PreselectAtLevelLoad = 0;
    this->bShouldExcludeFromBranchCulling = false;
    this->bSoundCueExcludedFromBranchCulling = false;
    this->bRandomizeWithoutReplacement = true;
}

