#include "RadialForceActor.h"
#include "RadialForceComponent.h"

void ARadialForceActor::ToggleForce() {
}

void ARadialForceActor::FireImpulse() {
}

void ARadialForceActor::EnableForce() {
}

void ARadialForceActor::DisableForce() {
}

ARadialForceActor::ARadialForceActor() {
    this->ForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("ForceComponent0"));
}

