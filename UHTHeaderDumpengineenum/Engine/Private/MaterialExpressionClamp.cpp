#include "MaterialExpressionClamp.h"

UMaterialExpressionClamp::UMaterialExpressionClamp() {
    this->ClampMode = CMODE_Clamp;
    this->MinDefault = 0.00f;
    this->MaxDefault = 1.00f;
}

