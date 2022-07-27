#include "Texture2DArray.h"

UTexture2DArray::UTexture2DArray() {
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->AddressZ = TA_Wrap;
}

