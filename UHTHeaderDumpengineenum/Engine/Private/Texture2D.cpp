#include "Texture2D.h"

int32 UTexture2D::Blueprint_GetSizeY() const {
    return 0;
}

int32 UTexture2D::Blueprint_GetSizeX() const {
    return 0;
}

UTexture2D::UTexture2D() {
    this->LevelIndex = -1;
    this->FirstResourceMemMip = 0;
    this->bTemporarilyDisableStreaming = false;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
}

