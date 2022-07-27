#include "MaterialExpressionNoise.h"

UMaterialExpressionNoise::UMaterialExpressionNoise() {
    this->Scale = 1.00f;
    this->Quality = 1;
    this->NoiseFunction = NOISEFUNCTION_SimplexTex;
    this->bTurbulence = true;
    this->Levels = 6;
    this->OutputMin = -1.00f;
    this->OutputMax = 1.00f;
    this->LevelScale = 2.00f;
    this->bTiling = false;
    this->RepeatSize = 512;
}

