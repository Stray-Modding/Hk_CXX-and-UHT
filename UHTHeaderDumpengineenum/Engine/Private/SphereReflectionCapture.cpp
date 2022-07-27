#include "SphereReflectionCapture.h"
#include "DrawSphereComponent.h"

ASphereReflectionCapture::ASphereReflectionCapture() {
    this->DrawCaptureRadius = CreateDefaultSubobject<UDrawSphereComponent>(TEXT("DrawRadius1"));
}

