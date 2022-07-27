#include "MaterialExpressionSpeedTree.h"

UMaterialExpressionSpeedTree::UMaterialExpressionSpeedTree() {
    this->GeometryType = STG_Branch;
    this->WindType = STW_None;
    this->LODType = STLOD_Pop;
    this->BillboardThreshold = 0.90f;
    this->bAccurateWindVelocities = false;
}

