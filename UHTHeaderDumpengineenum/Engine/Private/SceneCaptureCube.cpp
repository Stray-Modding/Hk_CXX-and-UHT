#include "SceneCaptureCube.h"
#include "SceneCaptureComponentCube.h"

void ASceneCaptureCube::OnInterpToggle(bool bEnable) {
}

ASceneCaptureCube::ASceneCaptureCube() {
    this->CaptureComponentCube = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("NewSceneCaptureComponentCube"));
}

