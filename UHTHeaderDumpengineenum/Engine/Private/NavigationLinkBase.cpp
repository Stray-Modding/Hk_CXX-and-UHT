#include "NavigationLinkBase.h"

FNavigationLinkBase::FNavigationLinkBase() {
    this->LeftProjectHeight = 0.00f;
    this->MaxFallDownLength = 0.00f;
    this->SnapRadius = 0.00f;
    this->SnapHeight = 0.00f;
    this->bSupportsAgent0 = false;
    this->bSupportsAgent1 = false;
    this->bSupportsAgent2 = false;
    this->bSupportsAgent3 = false;
    this->bSupportsAgent4 = false;
    this->bSupportsAgent5 = false;
    this->bSupportsAgent6 = false;
    this->bSupportsAgent7 = false;
    this->bSupportsAgent8 = false;
    this->bSupportsAgent9 = false;
    this->bSupportsAgent10 = false;
    this->bSupportsAgent11 = false;
    this->bSupportsAgent12 = false;
    this->bSupportsAgent13 = false;
    this->bSupportsAgent14 = false;
    this->bSupportsAgent15 = false;
    this->Direction = ENavLinkDirection::BothWays;
    this->bUseSnapHeight = false;
    this->bSnapToCheapestArea = false;
    this->bCustomFlag0 = false;
    this->bCustomFlag1 = false;
    this->bCustomFlag2 = false;
    this->bCustomFlag3 = false;
    this->bCustomFlag4 = false;
    this->bCustomFlag5 = false;
    this->bCustomFlag6 = false;
    this->bCustomFlag7 = false;
    this->AreaClass = NULL;
}

