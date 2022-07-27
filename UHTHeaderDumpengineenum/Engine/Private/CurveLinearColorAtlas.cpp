#include "CurveLinearColorAtlas.h"

class UCurveLinearColor;

bool UCurveLinearColorAtlas::GetCurvePosition(UCurveLinearColor* InCurve, float& Position) {
    return false;
}

UCurveLinearColorAtlas::UCurveLinearColorAtlas() {
    this->TextureSize = 256;
    this->bSquareResolution = true;
    this->TextureHeight = 256;
}

