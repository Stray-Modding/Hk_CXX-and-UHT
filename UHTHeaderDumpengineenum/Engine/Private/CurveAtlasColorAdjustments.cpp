#include "CurveAtlasColorAdjustments.h"

FCurveAtlasColorAdjustments::FCurveAtlasColorAdjustments() {
    this->bChromaKeyTexture = false;
    this->AdjustBrightness = 0.00f;
    this->AdjustBrightnessCurve = 0.00f;
    this->AdjustVibrance = 0.00f;
    this->AdjustSaturation = 0.00f;
    this->AdjustRGBCurve = 0.00f;
    this->AdjustHue = 0.00f;
    this->AdjustMinAlpha = 0.00f;
    this->AdjustMaxAlpha = 0.00f;
}

