#include "MaterialProxySettings.h"

FMaterialProxySettings::FMaterialProxySettings() {
    this->GutterSpace = 0.00f;
    this->MetallicConstant = 0.00f;
    this->RoughnessConstant = 0.00f;
    this->AnisotropyConstant = 0.00f;
    this->SpecularConstant = 0.00f;
    this->OpacityConstant = 0.00f;
    this->OpacityMaskConstant = 0.00f;
    this->AmbientOcclusionConstant = 0.00f;
    this->TextureSizingType = TextureSizingType_UseSingleTextureSize;
    this->MaterialMergeType = MaterialMergeType_Default;
    this->BlendMode = BLEND_Opaque;
    this->bAllowTwoSidedMaterial = false;
    this->bNormalMap = false;
    this->bTangentMap = false;
    this->bMetallicMap = false;
    this->bRoughnessMap = false;
    this->bAnisotropyMap = false;
    this->bSpecularMap = false;
    this->bEmissiveMap = false;
    this->bOpacityMap = false;
    this->bOpacityMaskMap = false;
    this->bAmbientOcclusionMap = false;
}

