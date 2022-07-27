#include "MaterialExpressionTransform.h"

UMaterialExpressionTransform::UMaterialExpressionTransform() {
    this->TransformSourceType = TRANSFORMSOURCE_Tangent;
    this->TransformType = TRANSFORM_World;
}

