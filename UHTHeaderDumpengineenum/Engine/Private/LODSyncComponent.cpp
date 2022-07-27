#include "LODSyncComponent.h"

FString ULODSyncComponent::GetLODSyncDebugText() const {
    return TEXT("");
}

ULODSyncComponent::ULODSyncComponent() {
    this->NumLODs = -1;
    this->ForcedLOD = -1;
    this->CurrentLOD = 0;
    this->CurrentNumLODs = 0;
}

