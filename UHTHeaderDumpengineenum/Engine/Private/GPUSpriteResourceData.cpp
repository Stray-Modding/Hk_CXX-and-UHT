#include "GPUSpriteResourceData.h"

FGPUSpriteResourceData::FGPUSpriteResourceData() {
    this->GlobalVectorFieldScale = 0.00f;
    this->GlobalVectorFieldTightness = 0.00f;
    this->PerParticleVectorFieldScale = 0.00f;
    this->PerParticleVectorFieldBias = 0.00f;
    this->DragCoefficientScale = 0.00f;
    this->DragCoefficientBias = 0.00f;
    this->ResilienceScale = 0.00f;
    this->ResilienceBias = 0.00f;
    this->CollisionRadiusScale = 0.00f;
    this->CollisionRadiusBias = 0.00f;
    this->CollisionTimeBias = 0.00f;
    this->CollisionRandomSpread = 0.00f;
    this->CollisionRandomDistribution = 0.00f;
    this->OneMinusFriction = 0.00f;
    this->RotationRateScale = 0.00f;
    this->CameraMotionBlurAmount = 0.00f;
    this->ScreenAlignment = PSA_FacingCameraPosition;
    this->LockAxisFlag = EPAL_NONE;
    this->bRemoveHMDRoll = false;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
}

