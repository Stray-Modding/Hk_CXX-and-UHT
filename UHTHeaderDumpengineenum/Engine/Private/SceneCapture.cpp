#include "SceneCapture.h"
#include "SceneComponent.h"

ASceneCapture::ASceneCapture() {
    this->MeshComp = NULL;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

