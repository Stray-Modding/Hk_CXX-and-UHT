#include "HKSpectatorPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

AHKSpectatorPawn::AHKSpectatorPawn() {
    this->m_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->m_moveSpeed = 100.00f;
    this->m_horizontalLookSpeed = 5.00f;
    this->m_verticalLookSpeed = 3.00f;
    this->m_maxLookUpAngle = 180.00f;
    this->m_teleportFeedbackClippingDistance = 10.00f;
}

