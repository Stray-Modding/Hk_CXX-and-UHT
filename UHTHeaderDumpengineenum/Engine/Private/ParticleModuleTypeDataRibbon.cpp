#include "ParticleModuleTypeDataRibbon.h"

UParticleModuleTypeDataRibbon::UParticleModuleTypeDataRibbon() {
    this->MaxTessellationBetweenParticles = 25;
    this->SheetsPerTrail = 1;
    this->MaxTrailCount = 1;
    this->MaxParticleInTrailCount = 500;
    this->bDeadTrailsOnDeactivate = true;
    this->bDeadTrailsOnSourceLoss = true;
    this->bClipSourceSegement = true;
    this->bEnablePreviousTangentRecalculation = true;
    this->bTangentRecalculationEveryFrame = false;
    this->bSpawnInitialParticle = false;
    this->RenderAxis = Trails_CameraUp;
    this->TangentSpawningScalar = 0.00f;
    this->bRenderGeometry = true;
    this->bRenderSpawnPoints = false;
    this->bRenderTangents = false;
    this->bRenderTessellation = false;
    this->TilingDistance = 0.00f;
    this->DistanceTessellationStepSize = 15.00f;
    this->bEnableTangentDiffInterpScale = false;
    this->TangentTessellationScalar = 5.00f;
}

