#include "SoundCue.h"

USoundCue::USoundCue() {
    this->bPrimeOnLoad = false;
    this->FirstNode = NULL;
    this->VolumeMultiplier = 0.75f;
    this->PitchMultiplier = 1.00f;
    this->SubtitlePriority = 10000.00f;
    this->bOverrideAttenuation = false;
    this->bExcludeFromRandomNodeBranchCulling = false;
    this->CookedQualityIndex = -1;
    this->bHasPlayWhenSilent = false;
}

