#include "MaterialExpressionTextureCoordinate.h"

UMaterialExpressionTextureCoordinate::UMaterialExpressionTextureCoordinate() {
    this->CoordinateIndex = 0;
    this->UTiling = 1.00f;
    this->VTiling = 1.00f;
    this->UnMirrorU = false;
    this->UnMirrorV = false;
}

