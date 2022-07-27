#include "ParticleModuleCollision.h"

UParticleModuleCollision::UParticleModuleCollision() {
    this->CollisionCompletionOption = EPCC_Kill;
    this->CollisionTypes.AddDefaulted(1);
    this->bApplyPhysics = false;
    this->bIgnoreTriggerVolumes = true;
    this->DirScalar = 3.50f;
    this->bPawnsDoNotDecrementCount = true;
    this->bOnlyVerticalNormalsDecrementCount = false;
    this->VerticalFudgeFactor = 0.10f;
    this->bDropDetail = true;
    this->bCollideOnlyIfVisible = true;
    this->bIgnoreSourceActor = true;
    this->MaxCollisionDistance = 1000.00f;
}

