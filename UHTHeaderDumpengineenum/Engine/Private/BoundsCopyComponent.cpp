#include "BoundsCopyComponent.h"

UBoundsCopyComponent::UBoundsCopyComponent() {
    this->bUseCollidingComponentsForSourceBounds = false;
    this->bKeepOwnBoundsScale = false;
    this->bUseCollidingComponentsForOwnBounds = false;
    this->bCopyXBounds = true;
    this->bCopyYBounds = true;
    this->bCopyZBounds = true;
}

