#include "PhysicsThruster.h"
#include "PhysicsThrusterComponent.h"

APhysicsThruster::APhysicsThruster() {
    this->ThrusterComponent = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("Thruster0"));
}

