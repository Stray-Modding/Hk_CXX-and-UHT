#include "CameraActor.h"
#include "CameraComponent.h"
#include "SceneComponent.h"

int32 ACameraActor::GetAutoActivatePlayerIndex() const {
    return 0;
}

ACameraActor::ACameraActor() {
    this->AutoActivateForPlayer = EAutoReceiveInput::Disabled;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bConstrainAspectRatio = true;
    this->AspectRatio = 1.78f;
    this->FOVAngle = 90.00f;
    this->PostProcessBlendWeight = 1.00f;
}

