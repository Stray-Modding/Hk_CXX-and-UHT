#include "StaticMeshOptimizationSettings.h"

FStaticMeshOptimizationSettings::FStaticMeshOptimizationSettings() {
    this->ReductionMethod = OT_NumOfTriangles;
    this->NumOfTrianglesPercentage = 0.00f;
    this->MaxDeviationPercentage = 0.00f;
    this->WeldingThreshold = 0.00f;
    this->bRecalcNormals = false;
    this->NormalsThreshold = 0.00f;
    this->SilhouetteImportance = 0;
    this->TextureImportance = 0;
    this->ShadingImportance = 0;
}

