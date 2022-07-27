#include "SkeletalMeshLODGroupSettings.h"

FSkeletalMeshLODGroupSettings::FSkeletalMeshLODGroupSettings() {
    this->LODHysteresis = 0.00f;
    this->BoneFilterActionOption = EBoneFilterActionOption::Remove;
    this->WeightOfPrioritization = 0.00f;
    this->BakePose = NULL;
}

