#include "BodyInstance.h"

FBodyInstance::FBodyInstance() {
    this->ObjectType = ECC_WorldStatic;
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->SleepFamily = ESleepFamily::Normal;
    this->DOFMode = EDOFMode::Default;
    this->bUseCCD = false;
    this->bIgnoreAnalyticCollisions = false;
    this->bNotifyRigidBodyCollision = false;
    this->bLockTranslation = false;
    this->bLockRotation = false;
    this->bLockXTranslation = false;
    this->bLockYTranslation = false;
    this->bLockZTranslation = false;
    this->bLockXRotation = false;
    this->bLockYRotation = false;
    this->bLockZRotation = false;
    this->bOverrideMaxAngularVelocity = false;
    this->bOverrideMaxDepenetrationVelocity = false;
    this->bOverrideWalkableSlopeOnInstance = false;
    this->bInterpolateWhenSubStepping = false;
    this->PositionSolverIterationCount = 0;
    this->VelocitySolverIterationCount = 0;
    this->MaxDepenetrationVelocity = 0.00f;
    this->MassInKgOverride = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->MassScale = 0.00f;
    this->PhysMaterialOverride = NULL;
    this->MaxAngularVelocity = 0.00f;
    this->CustomSleepThresholdMultiplier = 0.00f;
    this->StabilizationThresholdMultiplier = 0.00f;
    this->PhysicsBlendWeight = 0.00f;
}

