#include "MinimalViewInfo.h"

FMinimalViewInfo::FMinimalViewInfo() {
    this->FOV = 0.00f;
    this->DesiredFOV = 0.00f;
    this->OrthoWidth = 0.00f;
    this->OrthoNearClipPlane = 0.00f;
    this->OrthoFarClipPlane = 0.00f;
    this->AspectRatio = 0.00f;
    this->bConstrainAspectRatio = false;
    this->bUseFieldOfViewForLOD = false;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->PostProcessBlendWeight = 0.00f;
}

