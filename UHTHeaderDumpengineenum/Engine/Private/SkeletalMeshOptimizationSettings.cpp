#include "SkeletalMeshOptimizationSettings.h"

FSkeletalMeshOptimizationSettings::FSkeletalMeshOptimizationSettings() {
    this->TerminationCriterion = SMTC_NumOfTriangles;
    this->NumOfTrianglesPercentage = 0.00f;
    this->NumOfVertPercentage = 0.00f;
    this->MaxNumOfTriangles = 0;
    this->MaxNumOfVerts = 0;
    this->MaxDeviationPercentage = 0.00f;
    this->ReductionMethod = SMOT_NumOfTriangles;
    this->SilhouetteImportance = SMOI_Off;
    this->TextureImportance = SMOI_Off;
    this->ShadingImportance = SMOI_Off;
    this->SkinningImportance = SMOI_Off;
    this->bRemapMorphTargets = false;
    this->bRecalcNormals = false;
    this->WeldingThreshold = 0.00f;
    this->NormalsThreshold = 0.00f;
    this->MaxBonesPerVertex = 0;
    this->bEnforceBoneBoundaries = false;
    this->VolumeImportance = 0.00f;
    this->bLockEdges = false;
    this->bLockColorBounaries = false;
    this->BaseLOD = 0;
}

