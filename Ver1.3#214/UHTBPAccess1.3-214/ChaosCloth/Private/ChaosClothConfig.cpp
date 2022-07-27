#include "ChaosClothConfig.h"

UChaosClothConfig::UChaosClothConfig() {
    this->MassMode = EClothMassMode::Density;
    this->UniformMass = 0.00f;
    this->TotalMass = 0.50f;
    this->Density = 0.35f;
    this->MinPerParticleMass = 0.00f;
    this->EdgeStiffness = 1.00f;
    this->BendingStiffness = 1.00f;
    this->bUseBendingElements = false;
    this->AreaStiffness = 1.00f;
    this->VolumeStiffness = 0.00f;
    this->LimitScale = 1.00f;
    this->bUseGeodesicDistance = true;
    this->ShapeTargetStiffness = 0.00f;
    this->CollisionThickness = 1.00f;
    this->FrictionCoefficient = 0.80f;
    this->bUseCCD = false;
    this->bUseSelfCollisions = false;
    this->SelfCollisionThickness = 2.00f;
    this->bUseLegacyBackstop = false;
    this->DampingCoefficient = 0.01f;
    this->bUsePointBasedWindModel = false;
    this->DragCoefficient = 0.07f;
    this->LiftCoefficient = 0.04f;
    this->bUseGravityOverride = false;
    this->GravityScale = 1.00f;
    this->AngularVelocityScale = 0.75f;
    this->FictitiousAngularScale = 1.00f;
    this->bUseTetrahedralConstraints = false;
    this->bUseThinShellVolumeConstraints = false;
    this->bUseContinuousCollisionDetection = false;
}

