#include "PlanarReflectionComponent.h"

UPlanarReflectionComponent::UPlanarReflectionComponent() {
    this->PreviewBox = NULL;
    this->NormalDistortionStrength = 500.00f;
    this->PrefilterRoughness = 0.01f;
    this->PrefilterRoughnessDistance = 10000.00f;
    this->ScreenPercentage = 50;
    this->ExtraFOV = 0.00f;
    this->DistanceFromPlaneFadeStart = 400.00f;
    this->DistanceFromPlaneFadeEnd = 600.00f;
    this->DistanceFromPlaneFadeoutStart = 60.00f;
    this->DistanceFromPlaneFadeoutEnd = 100.00f;
    this->AngleFromPlaneFadeStart = 20.00f;
    this->AngleFromPlaneFadeEnd = 30.00f;
    this->bShowPreviewPlane = true;
    this->bRenderSceneTwoSided = false;
}

