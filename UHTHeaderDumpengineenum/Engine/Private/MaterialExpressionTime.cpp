#include "MaterialExpressionTime.h"

UMaterialExpressionTime::UMaterialExpressionTime() {
    this->bIgnorePause = false;
    this->bOverride_Period = false;
    this->Period = 0.00f;
}

