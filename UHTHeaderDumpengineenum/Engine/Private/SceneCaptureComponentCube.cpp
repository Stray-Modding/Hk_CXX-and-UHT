#include "SceneCaptureComponentCube.h"

void USceneCaptureComponentCube::CaptureScene() {
}

USceneCaptureComponentCube::USceneCaptureComponentCube() {
    this->TextureTarget = NULL;
    this->bCaptureRotation = false;
    this->TextureTargetLeft = NULL;
    this->TextureTargetRight = NULL;
    this->TextureTargetODS = NULL;
    this->IPD = 6.20f;
}

