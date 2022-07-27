#include "ShapeComponent.h"

UShapeComponent::UShapeComponent() {
    this->ShapeBodySetup = NULL;
    this->AreaClass = NULL;
    this->bDrawOnlyIfSelected = false;
    this->bShouldCollideWhenPlacing = false;
    this->bDynamicObstacle = false;
}

