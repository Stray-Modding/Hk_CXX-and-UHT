#include "MaterialExpressionRuntimeVirtualTextureSample.h"

UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample() {
    this->VirtualTexture = NULL;
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor;
    this->bSinglePhysicalSpace = true;
    this->bAdaptive = false;
    this->MipValueMode = RVTMVM_None;
    this->TextureAddressMode = RVTTA_Clamp;
}

