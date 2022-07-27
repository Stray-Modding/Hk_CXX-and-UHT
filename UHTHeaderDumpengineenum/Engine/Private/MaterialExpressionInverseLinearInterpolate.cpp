#include "MaterialExpressionInverseLinearInterpolate.h"

UMaterialExpressionInverseLinearInterpolate::UMaterialExpressionInverseLinearInterpolate() {
    this->ConstA = 0.00f;
    this->ConstB = 1.00f;
    this->ConstValue = 0.00f;
    this->bClampResult = false;
}

