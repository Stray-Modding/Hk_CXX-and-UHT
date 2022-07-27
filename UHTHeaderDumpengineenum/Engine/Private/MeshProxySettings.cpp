#include "MeshProxySettings.h"

FMeshProxySettings::FMeshProxySettings() {
    this->ScreenSize = 0;
    this->VoxelSize = 0.00f;
    this->MergeDistance = 0.00f;
    this->MaxRayCastDist = 0.00f;
    this->HardAngleThreshold = 0.00f;
    this->LightMapResolution = 0;
    this->NormalCalculationMethod = EProxyNormalComputationMethod::AngleWeighted;
    this->LandscapeCullingPrecision = ELandscapeCullingPrecision::High;
    this->bCalculateCorrectLODModel = false;
    this->bOverrideVoxelSize = false;
    this->bOverrideTransferDistance = false;
    this->bUseHardAngleThreshold = false;
    this->bComputeLightMapResolution = false;
    this->bRecalculateNormals = false;
    this->bUseLandscapeCulling = false;
    this->bAllowAdjacency = false;
    this->bAllowDistanceField = false;
    this->bReuseMeshLightmapUVs = false;
    this->bCreateCollision = false;
    this->bAllowVertexColors = false;
    this->bGenerateLightmapUVs = false;
}

