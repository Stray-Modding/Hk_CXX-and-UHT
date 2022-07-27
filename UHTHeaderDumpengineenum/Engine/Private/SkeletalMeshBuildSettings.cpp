#include "SkeletalMeshBuildSettings.h"

FSkeletalMeshBuildSettings::FSkeletalMeshBuildSettings() {
    this->bRecomputeNormals = false;
    this->bRecomputeTangents = false;
    this->bUseMikkTSpace = false;
    this->bComputeWeightedNormals = false;
    this->bRemoveDegenerates = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bUseFullPrecisionUVs = false;
    this->bBuildAdjacencyBuffer = false;
    this->ThresholdPosition = 0.00f;
    this->ThresholdTangentNormal = 0.00f;
    this->ThresholdUV = 0.00f;
    this->MorphThresholdPosition = 0.00f;
}

