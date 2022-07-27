#include "BroadphaseSettings.h"

FBroadphaseSettings::FBroadphaseSettings() {
    this->bUseMBPOnClient = false;
    this->bUseMBPOnServer = false;
    this->bUseMBPOuterBounds = false;
    this->MBPNumSubdivs = 0;
}

