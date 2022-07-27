#include "MeshSectionInfo.h"

FMeshSectionInfo::FMeshSectionInfo() {
    this->MaterialIndex = 0;
    this->bEnableCollision = false;
    this->bCastShadow = false;
    this->bVisibleInRayTracing = false;
    this->bForceOpaque = false;
}

