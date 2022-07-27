#include "MaterialInstanceConstant.h"

class UTexture;

FLinearColor UMaterialInstanceConstant::K2_GetVectorParameterValue(FName ParameterName) {
    return FLinearColor{};
}

UTexture* UMaterialInstanceConstant::K2_GetTextureParameterValue(FName ParameterName) {
    return NULL;
}

float UMaterialInstanceConstant::K2_GetScalarParameterValue(FName ParameterName) {
    return 0.0f;
}

UMaterialInstanceConstant::UMaterialInstanceConstant() {
    this->PhysMaterialMask = NULL;
}

