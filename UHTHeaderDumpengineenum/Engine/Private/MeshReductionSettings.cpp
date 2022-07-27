#include "MeshReductionSettings.h"

FMeshReductionSettings::FMeshReductionSettings() {
    this->PercentTriangles = 0.00f;
    this->PercentVertices = 0.00f;
    this->MaxDeviation = 0.00f;
    this->PixelError = 0.00f;
    this->WeldingThreshold = 0.00f;
    this->HardAngleThreshold = 0.00f;
    this->BaseLODModel = 0;
    this->SilhouetteImportance = EMeshFeatureImportance::Off;
    this->TextureImportance = EMeshFeatureImportance::Off;
    this->ShadingImportance = EMeshFeatureImportance::Off;
    this->bRecalculateNormals = false;
    this->bGenerateUniqueLightmapUVs = false;
    this->bKeepSymmetry = false;
    this->bVisibilityAided = false;
    this->bCullOccluded = false;
    this->TerminationCriterion = EStaticMeshReductionTerimationCriterion::Triangles;
    this->VisibilityAggressiveness = EMeshFeatureImportance::Off;
    this->VertexColorImportance = EMeshFeatureImportance::Off;
}

