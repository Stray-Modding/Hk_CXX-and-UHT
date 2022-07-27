#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->bSuppressFaceRemapTable = false;
    this->bSupportUVFromHitResults = true;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = false;
    this->bDisableKinematicKinematicPairs = false;
    this->bDisableCCD = false;
    this->bEnableEnhancedDeterminism = false;
    this->AnimPhysicsMinDeltaTime = 0.00f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MaxPhysicsDeltaTime = 0.03f;
    this->bSubstepping = true;
    this->bSubsteppingAsync = false;
    this->MaxSubstepDeltaTime = 0.02f;
    this->MaxSubsteps = 2;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.02f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(31);
    this->MinDeltaVelocityForHitEvents = 0.00f;
}

