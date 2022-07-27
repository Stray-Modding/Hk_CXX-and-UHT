#include "CameraShakeSourceActor.h"
#include "CameraShakeSourceComponent.h"

ACameraShakeSourceActor::ACameraShakeSourceActor() {
    this->CameraShakeSourceComponent = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("CameraShakeSourceComponent"));
}

