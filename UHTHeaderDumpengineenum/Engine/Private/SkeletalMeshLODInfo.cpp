#include "SkeletalMeshLODInfo.h"

FSkeletalMeshLODInfo::FSkeletalMeshLODInfo() {
    this->LODHysteresis = 0.00f;
    this->WeightOfPrioritization = 0.00f;
    this->BakePose = NULL;
    this->BakePoseOverride = NULL;
    this->SkinCacheUsage = ESkinCacheUsage::Auto;
    this->bHasBeenSimplified = false;
    this->bHasPerLODVertexColors = false;
    this->bAllowCPUAccess = false;
    this->bSupportUniformlyDistributedSampling = false;
}

