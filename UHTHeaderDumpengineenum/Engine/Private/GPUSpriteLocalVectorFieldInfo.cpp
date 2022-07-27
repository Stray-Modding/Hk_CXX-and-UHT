#include "GPUSpriteLocalVectorFieldInfo.h"

FGPUSpriteLocalVectorFieldInfo::FGPUSpriteLocalVectorFieldInfo() {
    this->Field = NULL;
    this->Intensity = 0.00f;
    this->Tightness = 0.00f;
    this->bIgnoreComponentTransform = false;
    this->bTileX = false;
    this->bTileY = false;
    this->bTileZ = false;
    this->bUseFixDT = false;
}

