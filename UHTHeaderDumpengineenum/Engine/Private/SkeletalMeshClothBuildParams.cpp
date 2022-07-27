#include "SkeletalMeshClothBuildParams.h"

FSkeletalMeshClothBuildParams::FSkeletalMeshClothBuildParams() {
    this->TargetLod = 0;
    this->bRemapParameters = false;
    this->LODIndex = 0;
    this->SourceSection = 0;
    this->bRemoveFromMesh = false;
}

