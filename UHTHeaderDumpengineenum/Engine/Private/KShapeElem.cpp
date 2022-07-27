#include "KShapeElem.h"

FKShapeElem::FKShapeElem() {
    this->RestOffset = 0.00f;
    this->bContributeToMass = false;
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
}

