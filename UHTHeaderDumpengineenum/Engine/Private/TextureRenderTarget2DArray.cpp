#include "TextureRenderTarget2DArray.h"

UTextureRenderTarget2DArray::UTextureRenderTarget2DArray() {
    this->SizeX = 0;
    this->SizeY = 0;
    this->Slices = 0;
    this->OverrideFormat = PF_Unknown;
    this->bHDR = true;
    this->bForceLinearGamma = true;
}

