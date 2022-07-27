#include "MaterialExpressionAntialiasedTextureMask.h"

UMaterialExpressionAntialiasedTextureMask::UMaterialExpressionAntialiasedTextureMask() {
    this->Threshold = 0.50f;
    this->Channel = TCC_Alpha;
}

