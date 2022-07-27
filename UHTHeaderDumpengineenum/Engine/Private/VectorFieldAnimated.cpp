#include "VectorFieldAnimated.h"

UVectorFieldAnimated::UVectorFieldAnimated() {
    this->Texture = NULL;
    this->ConstructionOp = VFCO_Extrude;
    this->VolumeSizeX = 16;
    this->VolumeSizeY = 16;
    this->VolumeSizeZ = 16;
    this->SubImagesX = 0;
    this->SubImagesY = 0;
    this->FrameCount = 0;
    this->FramesPerSecond = 0.00f;
    this->bLoop = false;
    this->NoiseField = NULL;
    this->NoiseScale = 0.00f;
    this->NoiseMax = 0.00f;
}

