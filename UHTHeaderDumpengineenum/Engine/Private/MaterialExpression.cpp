#include "MaterialExpression.h"

UMaterialExpression::UMaterialExpression() {
    this->Material = NULL;
    this->Function = NULL;
    this->bIsParameterExpression = false;
}

