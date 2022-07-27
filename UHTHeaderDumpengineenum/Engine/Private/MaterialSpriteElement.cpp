#include "MaterialSpriteElement.h"

FMaterialSpriteElement::FMaterialSpriteElement() {
    this->Material = NULL;
    this->DistanceToOpacityCurve = NULL;
    this->bSizeIsInScreenSpace = false;
    this->BaseSizeX = 0.00f;
    this->BaseSizeY = 0.00f;
    this->DistanceToSizeCurve = NULL;
}

