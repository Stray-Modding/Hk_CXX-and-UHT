#include "TextureRenderTargetVolume.h"

UTextureRenderTargetVolume::UTextureRenderTargetVolume() {
    this->SizeX = 0;
    this->SizeY = 0;
    this->SizeZ = 0;
    this->OverrideFormat = PF_Unknown;
    this->bHDR = true;
    this->bForceLinearGamma = true;
}

