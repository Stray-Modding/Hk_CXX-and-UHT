#include "EmitterCameraLensEffectBase.h"

AEmitterCameraLensEffectBase::AEmitterCameraLensEffectBase() {
    this->PS_CameraEffect = NULL;
    this->PS_CameraEffectNonExtremeContent = NULL;
    this->BaseCamera = NULL;
    this->BaseFOV = 80.00f;
    this->bAllowMultipleInstances = false;
    this->bResetWhenRetriggered = false;
    this->DistFromCamera = 340282346638528859811704183484516925440.00f;
}

