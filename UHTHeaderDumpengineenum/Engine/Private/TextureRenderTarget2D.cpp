#include "TextureRenderTarget2D.h"

UTextureRenderTarget2D::UTextureRenderTarget2D() {
    this->SizeX = 1;
    this->SizeY = 1;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->bForceLinearGamma = true;
    this->bHDR = true;
    this->bGPUSharedFlag = false;
    this->RenderTargetFormat = RTF_RGBA16f;
    this->bAutoGenerateMips = false;
    this->MipsSamplerFilter = TF_Default;
    this->MipsAddressU = TA_Clamp;
    this->MipsAddressV = TA_Clamp;
    this->OverrideFormat = PF_Unknown;
}

