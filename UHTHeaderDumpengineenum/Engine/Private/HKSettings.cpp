#include "HKSettings.h"

UHKSettings::UHKSettings() {
    this->GarbageCollectionOnMapChange = false;
    this->KeepCommonLevelsOnMapChange = true;
    this->AmortizeActorInitialization = true;
    this->IgnoreHigherFadeOutRequests = false;
    this->StreamingVolumeExitHysteresis = 400.00f;
}

