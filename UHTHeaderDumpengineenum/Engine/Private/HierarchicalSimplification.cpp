#include "HierarchicalSimplification.h"

FHierarchicalSimplification::FHierarchicalSimplification() {
    this->TransitionScreenSize = 0.00f;
    this->OverrideDrawDistance = 0.00f;
    this->bUseOverrideDrawDistance = false;
    this->bAllowSpecificExclusion = false;
    this->bSimplifyMesh = false;
    this->bOnlyGenerateClustersForVolumes = false;
    this->bReusePreviousLevelClusters = false;
    this->DesiredBoundRadius = 0.00f;
    this->DesiredFillingPercentage = 0.00f;
    this->MinNumberOfActorsToBuild = 0;
}

