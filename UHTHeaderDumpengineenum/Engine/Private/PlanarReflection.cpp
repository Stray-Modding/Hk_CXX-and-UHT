#include "PlanarReflection.h"
#include "PlanarReflectionComponent.h"

void APlanarReflection::OnInterpToggle(bool bEnable) {
}

APlanarReflection::APlanarReflection() {
    this->PlanarReflectionComponent = CreateDefaultSubobject<UPlanarReflectionComponent>(TEXT("NewPlanarReflectionComponent"));
    this->bShowPreviewPlane = true;
}

