#include "MeshUVChannelInfo.h"

FMeshUVChannelInfo::FMeshUVChannelInfo() {
    this->bInitialized = false;
    this->bOverrideDensities = false;
    this->LocalUVDensities[0] = 0.00f;
    this->LocalUVDensities[1] = 0.00f;
    this->LocalUVDensities[2] = 0.00f;
    this->LocalUVDensities[3] = 0.00f;
}

