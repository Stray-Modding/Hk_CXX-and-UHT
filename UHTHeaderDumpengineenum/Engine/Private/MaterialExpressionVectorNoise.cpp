#include "MaterialExpressionVectorNoise.h"

UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise() {
    this->NoiseFunction = VNF_CellnoiseALU;
    this->Quality = 1;
    this->bTiling = false;
    this->TileSize = 300;
}

