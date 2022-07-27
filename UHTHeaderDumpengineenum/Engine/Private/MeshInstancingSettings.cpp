#include "MeshInstancingSettings.h"

FMeshInstancingSettings::FMeshInstancingSettings() {
    this->ActorClassToUse = NULL;
    this->InstanceReplacementThreshold = 0;
    this->MeshReplacementMethod = EMeshInstancingReplacementMethod::RemoveOriginalActors;
    this->bSkipMeshesWithVertexColors = false;
    this->bUseHLODVolumes = false;
    this->ISMComponentToUse = NULL;
}

