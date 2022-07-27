#include "HierarchicalInstancedStaticMeshComponent.h"

bool UHierarchicalInstancedStaticMeshComponent::RemoveInstances(const TArray<int32>& InstancesToRemove) {
    return false;
}

UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent() {
    this->NumBuiltInstances = 0;
    this->bEnableDensityScaling = false;
    this->OcclusionLayerNumNodes = 0;
    this->bDisableCollision = false;
    this->InstanceCountToRender = 0;
}

