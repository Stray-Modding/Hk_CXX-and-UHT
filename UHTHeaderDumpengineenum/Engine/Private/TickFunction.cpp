#include "TickFunction.h"

FTickFunction::FTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bTickEvenWhenPaused = false;
    this->bCanEverTick = false;
    this->bStartWithTickEnabled = false;
    this->bAllowTickOnDedicatedServer = false;
    this->TickInterval = 0.00f;
}

