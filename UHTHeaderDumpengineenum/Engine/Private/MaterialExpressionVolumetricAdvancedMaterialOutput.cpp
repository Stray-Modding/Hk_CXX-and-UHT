#include "MaterialExpressionVolumetricAdvancedMaterialOutput.h"

UMaterialExpressionVolumetricAdvancedMaterialOutput::UMaterialExpressionVolumetricAdvancedMaterialOutput() {
    this->ConstPhaseG = 0.00f;
    this->ConstPhaseG2 = 0.00f;
    this->ConstPhaseBlend = 0.00f;
    this->PerSamplePhaseEvaluation = false;
    this->MultiScatteringApproximationOctaveCount = 0;
    this->ConstMultiScatteringContribution = 0.50f;
    this->ConstMultiScatteringOcclusion = 0.50f;
    this->ConstMultiScatteringEccentricity = 0.50f;
    this->bGroundContribution = false;
    this->bGrayScaleMaterial = false;
    this->bRayMarchVolumeShadow = true;
}

