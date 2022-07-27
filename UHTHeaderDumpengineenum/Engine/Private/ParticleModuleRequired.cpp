#include "ParticleModuleRequired.h"

UParticleModuleRequired::UParticleModuleRequired() {
    this->Material = NULL;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
    this->ScreenAlignment = PSA_Square;
    this->bUseLocalSpace = false;
    this->bKillOnDeactivate = false;
    this->bKillOnCompleted = false;
    this->SortMode = PSORTMODE_None;
    this->bUseLegacyEmitterTime = true;
    this->bRemoveHMDRoll = false;
    this->bEmitterDurationUseRange = false;
    this->EmitterDuration = 1.00f;
    this->EmitterDelay = 0.00f;
    this->EmitterDelayLow = 0.00f;
    this->bDelayFirstLoopOnly = false;
    this->InterpolationMethod = PSUVIM_None;
    this->bScaleUV = false;
    this->bEmitterDelayUseRange = false;
    this->ParticleBurstMethod = EPBM_Instant;
    this->bOverrideSystemMacroUV = false;
    this->bUseMaxDrawCount = true;
    this->OpacitySourceMode = OSM_Alpha;
    this->EmitterNormalsMode = ENM_CameraFacing;
    this->bOrbitModuleAffectsVelocityAlignment = false;
    this->SubImages_Horizontal = 1;
    this->SubImages_Vertical = 1;
    this->RandomImageTime = 0.00f;
    this->RandomImageChanges = 0;
    this->MacroUVRadius = 0.00f;
    this->UVFlippingMode = EParticleUVFlipMode::None;
    this->BoundingMode = BVC_EightVertices;
    this->bDurationRecalcEachLoop = false;
    this->AlphaThreshold = 0.10f;
    this->EmitterLoops = 0;
    this->CutoutTexture = NULL;
    this->MaxDrawCount = 500;
    this->EmitterDurationLow = 0.00f;
}

