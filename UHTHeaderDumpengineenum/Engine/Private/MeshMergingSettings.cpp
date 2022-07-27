#include "MeshMergingSettings.h"

FMeshMergingSettings::FMeshMergingSettings() {
    this->TargetLightMapResolution = 0;
    this->OutputUVs[0] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[1] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[2] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[3] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[4] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[5] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[6] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[7] = EUVOutput::DoNotOutputChannel;
    this->GutterSize = 0;
    this->SpecificLOD = 0;
    this->LODSelectionType = EMeshLODSelectionType::AllLODs;
    this->bGenerateLightMapUV = false;
    this->bComputedLightMapResolution = false;
    this->bPivotPointAtZero = false;
    this->bMergePhysicsData = false;
    this->bMergeMaterials = false;
    this->bCreateMergedMaterial = false;
    this->bBakeVertexDataToMesh = false;
    this->bUseVertexDataForBakingMaterial = false;
    this->bUseTextureBinning = false;
    this->bReuseMeshLightmapUVs = false;
    this->bMergeEquivalentMaterials = false;
    this->bUseLandscapeCulling = false;
    this->bIncludeImposters = false;
    this->bAllowDistanceField = false;
}

