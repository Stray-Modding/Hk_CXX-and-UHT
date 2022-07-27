#include "TextureRenderTargetCube.h"

UTextureRenderTargetCube::UTextureRenderTargetCube() {
    this->SizeX = 0;
    this->OverrideFormat = PF_Unknown;
    this->bHDR = true;
    this->bForceLinearGamma = true;
}

