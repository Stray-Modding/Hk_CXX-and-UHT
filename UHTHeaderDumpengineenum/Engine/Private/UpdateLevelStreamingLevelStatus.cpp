#include "UpdateLevelStreamingLevelStatus.h"

FUpdateLevelStreamingLevelStatus::FUpdateLevelStreamingLevelStatus() {
    this->LODIndex = 0;
    this->bNewShouldBeLoaded = false;
    this->bNewShouldBeVisible = false;
    this->bNewShouldBlockOnLoad = false;
}

