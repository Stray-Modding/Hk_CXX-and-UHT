#include "PhysicsConstraintActor.h"
#include "PhysicsConstraintComponent.h"

APhysicsConstraintActor::APhysicsConstraintActor() {
    this->ConstraintComp = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("MyConstraintComp"));
    this->ConstraintActor1 = NULL;
    this->ConstraintActor2 = NULL;
    this->bDisableCollision = false;
}

