#include "MaterialExpressionSmoothStep.h"

UMaterialExpressionSmoothStep::UMaterialExpressionSmoothStep() {
    this->ConstMin = 0.00f;
    this->ConstMax = 1.00f;
    this->ConstValue = 0.00f;
}

