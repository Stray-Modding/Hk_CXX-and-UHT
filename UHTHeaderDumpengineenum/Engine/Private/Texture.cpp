#include "Texture.h"

UTexture::UTexture() {
    this->LODBias = 0;
    this->CompressionSettings = TC_Default;
    this->Filter = TF_Default;
    this->MipLoadOptions = ETextureMipLoadOptions::Default;
    this->LODGroup = TEXTUREGROUP_World;
    this->DownscaleOptions = ETextureDownscaleOptions::Default;
    this->sRGB = true;
    this->bNoTiling = false;
    this->VirtualTextureStreaming = false;
    this->CompressionYCoCg = false;
    this->bNotOfflineProcessed = false;
    this->bAsyncResourceReleaseHasBeenStarted = false;
}

