#include "SkeletalMeshLODSettings.h"

USkeletalMeshLODSettings::USkeletalMeshLODSettings() {
    this->bOverrideLODStreamingSettings = false;
    this->LODGroups.AddDefaulted(4);
}

