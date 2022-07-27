#include "LevelSimplificationDetails.h"

FLevelSimplificationDetails::FLevelSimplificationDetails() {
    this->bCreatePackagePerAsset = false;
    this->DetailsPercentage = 0.00f;
    this->bOverrideLandscapeExportLOD = false;
    this->LandscapeExportLOD = 0;
    this->bBakeFoliageToLandscape = false;
    this->bBakeGrassToLandscape = false;
    this->bGenerateMeshNormalMap = false;
    this->bGenerateMeshMetallicMap = false;
    this->bGenerateMeshRoughnessMap = false;
    this->bGenerateMeshSpecularMap = false;
    this->bGenerateLandscapeNormalMap = false;
    this->bGenerateLandscapeMetallicMap = false;
    this->bGenerateLandscapeRoughnessMap = false;
    this->bGenerateLandscapeSpecularMap = false;
}

