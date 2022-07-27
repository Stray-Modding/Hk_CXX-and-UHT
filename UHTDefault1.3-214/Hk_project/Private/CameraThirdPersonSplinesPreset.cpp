#include "CameraThirdPersonSplinesPreset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ACameraThirdPersonSplinesPreset::ACameraThirdPersonSplinesPreset() {
    this->m_cameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("cameraSpline"));
    this->m_targetSpline = CreateDefaultSubobject<USplineComponent>(TEXT("targetSpline"));
}

