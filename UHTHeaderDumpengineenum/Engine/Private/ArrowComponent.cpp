#include "ArrowComponent.h"

void UArrowComponent::SetArrowColor(FLinearColor NewColor) {
}

UArrowComponent::UArrowComponent() {
    this->ArrowSize = 1.00f;
    this->ArrowLength = 80.00f;
    this->ScreenSize = 0.00f;
    this->bIsScreenSizeScaled = false;
    this->bTreatAsASprite = false;
}

