#include "NavigationObjectBase.h"
#include "CapsuleComponent.h"

ANavigationObjectBase::ANavigationObjectBase() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->GoodSprite = NULL;
    this->BadSprite = NULL;
    this->bIsPIEPlayerStart = false;
}

