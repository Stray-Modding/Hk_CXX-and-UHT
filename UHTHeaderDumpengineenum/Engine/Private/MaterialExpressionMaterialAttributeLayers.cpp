#include "MaterialExpressionMaterialAttributeLayers.h"

UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers() {
    this->NumActiveLayerCallers = 0;
    this->NumActiveBlendCallers = 0;
    this->bIsLayerGraphBuilt = false;
}

