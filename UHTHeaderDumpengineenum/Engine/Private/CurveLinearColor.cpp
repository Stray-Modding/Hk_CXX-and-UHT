#include "CurveLinearColor.h"

FLinearColor UCurveLinearColor::GetUnadjustedLinearColorValue(float InTime) const {
    return FLinearColor{};
}

FLinearColor UCurveLinearColor::GetLinearColorValue(float InTime) const {
    return FLinearColor{};
}

FLinearColor UCurveLinearColor::GetClampedLinearColorValue(float InTime) const {
    return FLinearColor{};
}

UCurveLinearColor::UCurveLinearColor() {
    this->AdjustHue = 0.00f;
    this->AdjustSaturation = 1.00f;
    this->AdjustBrightness = 1.00f;
    this->AdjustBrightnessCurve = 1.00f;
    this->AdjustVibrance = 0.00f;
    this->AdjustMinAlpha = 0.00f;
    this->AdjustMaxAlpha = 1.00f;
}

