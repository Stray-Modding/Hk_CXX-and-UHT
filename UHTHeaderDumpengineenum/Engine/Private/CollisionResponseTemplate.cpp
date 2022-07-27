#include "CollisionResponseTemplate.h"

FCollisionResponseTemplate::FCollisionResponseTemplate() {
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->bCanModify = false;
}

