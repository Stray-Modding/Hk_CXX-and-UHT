#include "GPUSpriteEmitterInfo.h"

FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo() {
    this->RequiredModule = NULL;
    this->SpawnModule = NULL;
    this->SpawnPerUnitModule = NULL;
    this->PointAttractorRadiusSq = 0.00f;
    this->InvRotationRateScale = 0.00f;
    this->MaxLifetime = 0.00f;
    this->MaxParticleCount = 0;
    this->ScreenAlignment = PSA_FacingCameraPosition;
    this->LockAxisFlag = EPAL_NONE;
    this->bEnableCollision = false;
    this->CollisionMode = EParticleCollisionMode::SceneDepth;
    this->bRemoveHMDRoll = false;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
}

