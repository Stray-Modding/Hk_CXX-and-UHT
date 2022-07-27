#include "BodySetup.h"

UBodySetup::UBodySetup() {
    this->bAlwaysFullAnimWeight = false;
    this->bConsiderForBounds = true;
    this->bMeshCollideAll = false;
    this->bDoubleSidedGeometry = false;
    this->bGenerateNonMirroredCollision = true;
    this->bSharedCookedData = false;
    this->bGenerateMirroredCollision = true;
    this->bSupportUVsAndFaceRemap = false;
    this->PhysMaterial = NULL;
}

