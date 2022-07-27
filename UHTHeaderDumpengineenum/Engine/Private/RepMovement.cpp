#include "RepMovement.h"

FRepMovement::FRepMovement() {
    this->bSimulatedPhysicSleep = false;
    this->bRepPhysics = false;
    this->LocationQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->VelocityQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->RotationQuantizationLevel = ERotatorQuantization::ByteComponents;
}

