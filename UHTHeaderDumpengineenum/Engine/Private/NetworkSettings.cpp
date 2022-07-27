#include "NetworkSettings.h"

UNetworkSettings::UNetworkSettings() {
    this->bVerifyPeer = false;
    this->bEnableMultiplayerWorldOriginRebasing = false;
    this->MaxRepArraySize = 2048;
    this->MaxRepArrayMemory = 65535;
    this->NetworkEmulationProfiles.AddDefaulted(2);
}

