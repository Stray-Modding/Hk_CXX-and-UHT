#include "CameraShakeBase.h"

class UCameraShakePattern;

void UCameraShakeBase::SetRootShakePattern(UCameraShakePattern* InPattern) {
}

UCameraShakePattern* UCameraShakeBase::GetRootShakePattern() const {
    return NULL;
}

UCameraShakeBase::UCameraShakeBase() {
    this->bSingleInstance = false;
    this->ShakeScale = 1.00f;
    this->RootShakePattern = NULL;
    this->CameraManager = NULL;
}

