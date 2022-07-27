#include "ParticleModuleAttractorPoint.h"

UParticleModuleAttractorPoint::UParticleModuleAttractorPoint() {
    this->StrengthByDistance = true;
    this->bAffectBaseVelocity = false;
    this->bOverrideVelocity = false;
    this->bUseWorldSpacePosition = false;
    this->Positive_X = true;
    this->Positive_Y = true;
    this->Positive_Z = true;
    this->Negative_X = true;
    this->Negative_Y = true;
    this->Negative_Z = true;
}

