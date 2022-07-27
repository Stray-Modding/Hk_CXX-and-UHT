#include "MaterialExpressionSceneDepthWithoutWater.h"

UMaterialExpressionSceneDepthWithoutWater::UMaterialExpressionSceneDepthWithoutWater() {
    this->InputMode = EMaterialSceneAttributeInputMode::Coordinates;
    this->FallbackDepth = 1000000.00f;
}

