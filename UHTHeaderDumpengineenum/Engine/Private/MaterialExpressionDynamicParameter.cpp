#include "MaterialExpressionDynamicParameter.h"

UMaterialExpressionDynamicParameter::UMaterialExpressionDynamicParameter() {
    this->ParamNames.AddDefaulted(4);
    this->ParameterIndex = 0;
}

