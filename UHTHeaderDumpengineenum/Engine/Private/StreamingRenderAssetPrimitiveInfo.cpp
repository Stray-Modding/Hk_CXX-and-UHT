#include "StreamingRenderAssetPrimitiveInfo.h"

FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo() {
    this->RenderAsset = NULL;
    this->TexelFactor = 0.00f;
    this->PackedRelativeBox = 0;
    this->bAllowInvalidTexelFactorWhenUnregistered = false;
}

