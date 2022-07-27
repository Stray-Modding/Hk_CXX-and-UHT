#include "ImportanceTexture.h"

FImportanceTexture::FImportanceTexture() {
    this->NumMips = 0;
    this->Weighting = EImportanceWeight::Luminance;
}

