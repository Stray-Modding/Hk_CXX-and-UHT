#include "SceneCapture2D.h"
#include "SceneCaptureComponent2D.h"

void ASceneCapture2D::OnInterpToggle(bool bEnable) {
}

ASceneCapture2D::ASceneCapture2D() {
    this->CaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("NewSceneCaptureComponent2D"));
}

