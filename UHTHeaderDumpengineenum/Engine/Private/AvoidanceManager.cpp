#include "AvoidanceManager.h"

class UMovementComponent;

bool UAvoidanceManager::RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight) {
    return false;
}

int32 UAvoidanceManager::GetObjectCount() {
    return 0;
}

int32 UAvoidanceManager::GetNewAvoidanceUID() {
    return 0;
}

FVector UAvoidanceManager::GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp) {
    return FVector{};
}

UAvoidanceManager::UAvoidanceManager() {
    this->DefaultTimeToLive = 1.50f;
    this->LockTimeAfterAvoid = 0.20f;
    this->LockTimeAfterClean = 0.00f;
    this->DeltaTimeToPredict = 0.50f;
    this->ArtificialRadiusExpansion = 1.50f;
    this->TestHeightDifference = 500.00f;
    this->HeightCheckMargin = 10.00f;
}

